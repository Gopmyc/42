/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:33:59 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/14 17:46:51 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	i;
	int	length;

	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i])
	{
		length = ft_strlen(argv[i]);
		write(1, argv[i], length);
		write(1, "\n", sizeof(char));
		i++;
	}
	return (0);
}
