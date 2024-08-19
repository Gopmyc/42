/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:41:51 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/18 21:33:32 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush01.h"

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, sizeof(char));
}

/* Function to check input validity */
int	the_filter(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == 45)
			return (2);
		if (!(str[i] > 48 && str[i] < 53))
			return (3);
		i++;
		j++;
		if ((j < 16 || j > 16) && str[i] == '\0')
			return (5);
		if (str[i] == '\0')
			return (0);
		if (str[i] != 32)
			return (4);
		i++;
	}
	return (0);
}

/* Manage error messages */
void	errors_messages(char *str)
{
	int	returned;

	returned = the_filter(str);
	if (returned == 1)
		write (1, "Scratch! Please enter something for god damn sake!", 51);
	if (returned == 2)
		write (1, "You know you have to enter positive numbers right ??", 53);
	if (returned == 3)
	{
		write (1, "It's a 4x4 grid... even a child knows that you", 47);
		write (1, " can only put numbers from one to four ... 1 TO 4 !", 52);
	}
	if (returned == 4)
	{
		write (1, "Come on! Please put some space between number !", 48);
		write (1, " They need to breath !", 23);
	}
	if (returned == 5)
	{
		write (1, "Erm ... just in case i didn't tell you...", 42);
		write (1, " It's a 4x4 grid so please input 16 clues...", 45);
	}
}

/* Function to draw the final result */
void	draw_array(int **array)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (array[k])
		k++;
	while (i < k)
	{
		while (j < k)
		{
			ft_putnbr(array[i][j]);
			write(1, " ", 1);
			j++;
		}
		j = 0;
		write(1, "\n", 1);
		i++;
	}
}
