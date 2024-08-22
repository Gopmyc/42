/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 02:34:09 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/21 18:55:10 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

//#include <unistd.h>
//#include <stdlib.h>

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
//	tab = (int *)malloc(1337 * sizeof(int));
//	while (i < 1337)
//	{
//		tab[i] = i;
//		i++;
//	}
//	ft_foreach(tab, 1337, &ft_putnbr);
//	free(tab);
//	return (0);
//}
