/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:24:17 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/22 17:46:45 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"

long int	files_bytes_size(char *arg_file)
{
	long int	size;
	int			read_file;
	ssize_t		bytes_read;
	char		buffer[BUFFER_SIZE];

	read_file = open(arg_file, O_RDONLY);
	bytes_read = read(read_file, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
		size += bytes_read;
	close(read_file);
	return (size);
}
