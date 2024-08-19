/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:01:56 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/18 22:01:22 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "rush01.h"

/* Function to free the used memory space (and the reserved memory subspaces) */
void	free_array(int **array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/* Dynamic allocation of memory for the solver */
int **allocate_array(int size)
{
    int **array;
    int i;

    array = (int **)malloc(size * sizeof(int *));
    if (!array)
        return (NULL);
    i = 0;
    while (i < size)
    {
        array[i] = (int *)malloc(size * sizeof(int));
        if (!array[i])
        {
            while (i > 0)
            {
                i--;
                free(array[i]);
            }
            free(array);
            return (NULL);
        }
        i++;
    }
    return (array);
}

/* Creation of dynamic array for solver */
int **create_array(char *input)
{
    int **array;
    int size;
    int nb;

    nb = 0;
    while (*input)
    {
        if (*input >= '0' && *input <= '9')
            nb++;
        input++;
    }
    size = ft_sqrt(nb);
    array = allocate_array(size);
    if (!array)
        return (NULL);
    return (array);
}

