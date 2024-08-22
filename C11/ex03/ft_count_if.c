/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:53:49 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/21 19:25:15 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

//#include <stdio.h>
//int	is_non_empty(char *str)
//{
//	return (str[0] != '\0');
//}

//int	main(void)
//{
//	char *tab[] = {"Hello", "", "World", "42", "", "!"};
//	printf("%d\n", ft_count_if(tab, 6, &is_non_empty));
//	return (0);
//}
