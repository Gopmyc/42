/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 05:46:48 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/11 05:55:29 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		n;
	int		result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	n = 2;
	result = 1;
	while (n <= nb)
	{
		result = result * n;
		n++;
	}
	return (result);
}
