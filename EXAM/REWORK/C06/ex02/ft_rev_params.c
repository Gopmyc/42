/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:47:31 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/14 18:29:22 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//static char *str --> function no change var

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	main(int argc, char *argv[])
{
	int	length;
	int	j;

	if (argc < 2)
		return (1);
	j = argc - 1;
	while (argv[j])
	{
		if (j > 0)
		{
			length = ft_strlen(argv[j]);
			write(1, argv[j], length);
			write(1, "\n", sizeof(char));
			j--;
		}
		else
			break ;
	}
	return (0);
}
