/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 17:14:19 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/11 18:00:35 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_ascii_array(char *array[], int size)
{
	int		i;
	int		j;
	int		k;
	char	*a;
	char	*b;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			a = array[i];
			b = array[j];
			k = 0;
			while (a[k] && b[k] && a[k] == b[k])
				k++;
			if (a[k] > b[k])
				swap(&array[i], &array[j]);
			j++;
		}
		i++;
	}
}

int	string_length(const char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		length;
	char	*args[5];

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
	{
		args[i - 1] = argv[i];
		i++;
	}
	sort_ascii_array(args, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		length = string_length(args[i]);
		write(1, args[i], length);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
