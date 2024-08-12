/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:22:08 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/12 18:44:13 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nb! --> nb*(nb-1)! --> (nb*nb-1)*(nb*nb-2)*(nb*nb-3)...*1
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
