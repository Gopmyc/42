/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:00:39 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/18 22:23:24 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>
#include "rush01.h"

bool is_valid(int **array, int size, int row, int col)
{
    int num;
    int i;

    num = array[row][col];
    i = 0;
    while (i < size)
    {
        if (array[row][i] == num && i != col)
            return (false);
        i++;
    }
    i = 0;
    while (i < size)
    {
        if (array[i][col] == num && i != row)
            return (false);
        i++;
    }
    return (true);
}

bool solve_skyscraper(int **array, int size, int row, int col)
{
    int num;

    if (row == size)
        return (true);
    if (col == size)
        return (solve_skyscraper(array, size, row + 1, 0));
    if (array[row][col] != 0)
        return (solve_skyscraper(array, size, row, col + 1));
    num = 1;
    while (num <= size)
    {
        array[row][col] = num;
        if (is_valid(array, size, row, col))
        {
            if (solve_skyscraper(array, size, row, col + 1))
                return (true);
        }
        array[row][col] = 0;
        num++;
    }
    return (false);
}

void fill_initial_constraints(int **array, int size, int *constraints)
{
    int row;
    int col;

    row = 0;
    while (row < size)
    {
        col = 0;
        while (col < size)
        {
            array[row][col] = 0; // Initialisation de toutes les cases à 0
            col++;
        }
        row++;
    }
}

void resolve(int **array, int size, int *constraints)
{
    fill_initial_constraints(array, size, constraints);
    if (solve_skyscraper(array, size, 0, 0))
        draw_array(array);
    else
        write(1, "No solution found\n", 18);
}

int *parse_constraints(char *input, int size)
{
    int *constraints;
    int i;
    int j;

    constraints = (int *)malloc(size * size * sizeof(int));
    if (!constraints)
        return (NULL);
    i = 0;
    j = 0;
    while (*input)
    {
        if (*input >= '0' && *input <= '9')
        {
            constraints[j] = *input - '0';
            j++;
        }
        input++;
    }
    return (constraints);
}
Mise à Jour de main.c
Appelez parse_constraints avec les arguments appropriés :

c
Copy code
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

    constraints = parse_constraints(argv[1], size); // Correction : ajouter 'size'
    if (!constraints)
    {
        free_array(array, size);
        return (1);
    }

    resolve(array, size, constraints);
    free_array(array, size);
    free(constraints); // Assurez-vous de libérer les ressources
    return (0);
}
