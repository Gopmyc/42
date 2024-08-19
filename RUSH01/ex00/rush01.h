/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:18:01 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/18 22:22:56 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stdbool.h>

typedef struct s_position
{
	int	row;
	int	col;
}				t_position;

/* Math functions */
int				ft_sqrt(int nb);
int				array_size(char **str);
int				ft_strlen(char *src);

/* Array functions */
void			free_array(int **array, int size);
int				**allocate_array(int size);
int				**create_array(char *input);

/* Draw functions */
void			ft_putnbr(int nb);
int				the_filter(char *str);
void			errors_messages(char *str);
void			draw_array(int **array);

/* Resolve functions */
bool			is_valid(int **array, int size, int row, int col);
bool			solve_skyscraper(int **array, int size, int row, int col);
void			fill_initial_constraints(int **array,
					int size, int *constraints);
void			init_array(int **array, int size);
void			resolve(int **array, int size, int *constraints);

int				*parse_constraints(char *input, int size);
