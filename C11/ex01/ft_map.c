/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 03:55:23 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/21 19:22:40 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*array;
	int	i;

	i = 0;
	array = malloc(length * sizeof(int));
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

//#include <unistd.h>

//int	ft_negative(int nb)
//{
//	if (nb > 0)
//		nb = nb * (-1);
//	return (nb);
//}

//void	ft_putnbr(int nb)
//{
//	char	c;

//	if (nb == -2147483648)
//		write(1, "-2147483648", 11);
//	else
//	{
//		if (nb < 0)
//		{
//			write(1, "-", 1);
//			nb = -nb;
//		}
//		if (nb >= 10)
//			ft_putnbr(nb / 10);
//		c = nb % 10 + '0';
//		write(1, &c, 1);
//	}
//}

//int	main(void)
//{
//	int	*tab;
//	int	i;

//	i = 0;
//	tab = (int *)malloc(10 * sizeof(int));
//	while (i < 10)
//	{
//		tab[i] = i;
//		i++;
//	}
//	i = 0;
//	while (i < 10)
//	{
//		ft_putnbr(tab[i]);
//		write(1, "\n", 2);
//		i++;
//	}
//	int	*to_return = ft_map(tab, 10, &ft_negative);
//	i = 0;
//	while (i < 10)
//	{
//		ft_putnbr(to_return[i]);
//		write(1, "\n", 2);
//		i++;
//	}
//	free(tab);
//	free(to_return);
//	return (0);
//}
