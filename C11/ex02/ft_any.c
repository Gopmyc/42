/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:38:08 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/21 18:51:36 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (tab[i])
	{
		result = f(tab[i]);
		if (result != 0)
			return (1);
		i++;
	}
	return (0);
}

//#include <unistd.h>

//int	test(char *a)
//{
//	(void)a;
//	return (1);
//}

//int	main(void)
//{
//	char	temp;
//	char	*tab[3];

//	tab[0] = "test";
//	tab[1] = "test";
//	tab[2] = "test";
//	temp = ft_any(tab, &test) + '0';
//	write(1, &temp, 1);
//	return (0);
//}
