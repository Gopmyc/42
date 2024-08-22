/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 22:03:34 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/22 17:55:10 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Fonction autorise des librairie : close, open, read, write */
#include <unistd.h>
#include <fcntl.h>

/* Taille du tampon pour lire les données */
#define BUFFER_SIZE 1024

/* Declaration des fonctions : 'file.c' */
long int	files_bytes_size(char *arg_file);