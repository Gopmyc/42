/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:15:25 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/14 17:31:40 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	length;

	length = 0;
	if (!(argv[0]))
		return (0);
	while (argv[0][length])
		length++;
	write(1, argv[0], length);
	write(1, "\n", sizeof(char));
	return (0);
}
