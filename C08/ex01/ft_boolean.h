/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:57:46 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/13 23:56:22 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <unistd.h>

static inline int	even(int nbr)
{
	return (nbr % 2 == 0);
}

typedef int	t_bool;

#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0
#define EVEN even
