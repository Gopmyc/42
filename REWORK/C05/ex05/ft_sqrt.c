/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghoyaux <ghoyaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 21:05:53 by ghoyaux           #+#    #+#             */
/*   Updated: 2024/08/12 22:43:32 by ghoyaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_absolute(int nb)
{
	if (nb < 0)
		return (nb * (-1));
	return (nb);
}

// Pour racine carre 'S', x+1 = (1 / 2) * (x0 + (S / x0))
int	ft_sqrt(int nb)
{
	double		estimate;
	double		next_estimate;
	double		epsilon;
	int			result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	estimate = nb;
	epsilon = 0.00001;
	while (1)
	{
		next_estimate = (estimate + nb / estimate) / 2;
		if (ft_absolute(next_estimate - estimate) < epsilon)
			break ;
		estimate = next_estimate;
	}
	result = (int)next_estimate;
	if (result * result == nb)
		return (result);
	else
		return (0);
}
