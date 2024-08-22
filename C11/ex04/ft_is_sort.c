/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:25:52 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/21 19:57:20 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	if (length <= 1)
		return (1);
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

//#include <stdlib.h>
//#include <unistd.h>
//int	test_test(int a, int b)
//{
//	if (a < b)
//		return (-1);
//	if (a == b)
//		return (0);
//	return (1);
//}

//int	main(void)
//{
//	int		*tab;
//	char	var_test;
//	int		i;

//	tab = (int *)malloc(10 * sizeof(int));
//	i = 0;
//	while (i < 10)
//	{
//		tab[i] = i;
//		i++;
//	}
//	var_test = (ft_is_sort(tab, 10, &test_test) + '0');
//	write(1, &var_test, 1);

//	free(tab);
//	return (0);
//}
