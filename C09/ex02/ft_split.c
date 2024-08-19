/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:55:07 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/19 21:56:27 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_separator(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !ft_is_separator(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strdup_len(char *str, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_allocate_output(char *str, char *charset)
{
	int		words;
	char	**output;

	words = ft_count_words(str, charset);
	output = (char **)malloc((words + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	return (output);
}

char	**ft_split(char *str, char *charset)
{
	char	**output;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	output = ft_allocate_output(str, charset);
	if (!output)
		return (NULL);
	while (str[i])
	{
		while (str[i] && ft_is_separator(str[i], charset))
			i++;
		len = 0;
		while (str[i + len] && !ft_is_separator(str[i + len], charset))
			len++;
		if (len > 0)
			output[j++] = ft_strdup_len(str + i, len);
		i += len;
	}
	output[j] = 0;
	return (output);
}
