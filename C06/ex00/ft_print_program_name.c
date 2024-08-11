/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:07:29 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/11 16:08:57 by ghoyaux          ###   ########.fr       */
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

	if (argc > 0 && argv[0] != NULL)
	{
		length = string_length(argv[0]);
		if (length > 0)
			write(1, argv[0], length);
	}
	write(1, "\n", 1);
	return (0);
}
