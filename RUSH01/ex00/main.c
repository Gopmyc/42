/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:20:11 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/18 22:01:34 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "rush01.h"

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int	*parse_constraints(char *input, int size)
{
	int	*constraints;
	int	i;
	char	*start;

	constraints = (int *)malloc(size * sizeof(int));
	if (!constraints)
		return (NULL);
	i = 0;
	start = input;
	while (i < size)
	{
		while (*start == ' ')
			start++;
		constraints[i] = ft_atoi(start);
		while (*start >= '0' && *start <= '9')
			start++;
		i++;
	}
	return (constraints);
}
int main(int argc, char **argv)
{
    int **array;
    int size;
    int *constraints;

    if (argc < 2)
        return (1);
    
    errors_messages(argv[1]);
    size = array_size(argv);
    array = create_array(argv[1]);
    if (!array)
        return (1);

    constraints = parse_constraints(argv[1]); // Cette fonction doit être définie pour extraire les contraintes
    
    resolve(array, size, constraints);
    free_array(array, size);
    return (0);
}
