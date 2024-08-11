/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 16:14:36 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/11 16:18:16 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	string_length(const char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

int	main(int argc, char *argv[])
{
	int	length;
	int	i;

	i = 1;
	while (i < argc)
	{
		length = string_length(argv[i]);
		write(1, argv[i], length);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
