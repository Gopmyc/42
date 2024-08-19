/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:30:49 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/14 23:53:51 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	compareStrings(char *str1, char *str2)
{
	int i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] < str2[i])
			return -1;
		else if (str1[i] > str2[i])
			return 1;
		i++;
	}
	if (!str1[i] && str2[i])
		return -1;
	if (str1[i] && !str2[i])
		return 1;
	return 0;
}

void	ft_sort_strings(char *argv[], int argc)
{
	int		i;
	int		sorted;
	char	*temp;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 1;
		while (i < argc - 1)
		{
			if (compareStrings(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int i;
	int length;

	if (argc < 2)
		return 0;

	ft_sort_strings(argv, argc);

	i = 1;
	while (i < argc)
	{
		length = ft_strlen(argv[i]);
		write(1, argv[i], length);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}