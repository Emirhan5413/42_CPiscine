/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:35:54 by eunlu             #+#    #+#             */
/*   Updated: 2024/08/27 17:43:09 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power > 0)
	{
		while (power > 0)
		{
			result *= nb;
			--power;
		}
		return (result);
	}
	return (result);
}
