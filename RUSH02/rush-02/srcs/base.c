/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:57:27 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/25 23:54:51 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_rush02.h"

char	*ft_concatenate(char *s1, char *s2)
{
	int		i;
	int		j;
	int		size1;
	int		size2;
	char	*result;

	i = 0;
	j = 0;
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	result = (char *)malloc(((size1 + size2) + 2) * sizeof(char));
	if (!(result))
		return (NULL);
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	i++;
	result[i] = ' ';
	while (s2[j])
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_find(t_dict_array *s_out, char *value)
{
	long	i;

	i = 0;
	while (s_out[i].numbers[0] != '\0')
	{
		if (ft_compare_string(value, s_out[i].numbers) == 1)
			break ;
		i++;
	}
	return (s_out[i].letters);
}

void	ft_free_all(t_dict_array *s_out)
{
	long	i;

	i = 0;
	while (s_out[i].numbers[0] != '\0')
	{
		free(s_out[i].numbers);
		free(s_out[i].letters);
		i++;
	}
}

char	*ft_split_find(t_dict_array *s_out, char *value)
{
	char				*j;
	int					i;
	int					mult;
	char				*element;
	int					temporary;

	i = ft_strlen(value);
	mult = 1;
	element = ft_find(s_out, value);
	if (!(element))
	{
		while (i > 0)
		{
			temporary = (value[i - 1] - '0') * 10;
			j = ft_concatenate(j, ft_find(s_out, ft_int_to_char(temporary)));
			if (!(j))
				return (NULL);
			mult *= 10;
			i--;
		}
		return (j);
	}
	else
		return (element);
}
