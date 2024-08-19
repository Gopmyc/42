/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:06:53 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/14 16:20:41 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*array;
	int		length;
	int		i;

	length = 0;
	while (src[length])
		length++;
	array = (char *)malloc((length + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		array[i] = src[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
