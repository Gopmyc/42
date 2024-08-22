/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:58:12 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/22 17:53:57 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/library.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	long int	size;

	if (argc < 2)
		write(1, "File name missing.\n", (20 * sizeof(char)));
	else if (argc > 2)
		write(1, "Too many arguments.\n", (21 * sizeof(char)));
	else if (!(open(argv[1], O_RDONLY)))
		write(1, "Cannot read file.\n", (19 * sizeof(char)));
	else
	{
		size = files_bytes_size(argv[2]);
		printf("Taille du fichier : %ld\n", size);
	}
	return (0);
}
