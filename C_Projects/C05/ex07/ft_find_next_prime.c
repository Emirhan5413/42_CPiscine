/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:23:55 by eunlu             #+#    #+#             */
/*   Updated: 2024/09/03 10:42:39 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	root;

	root = 2;
	if (nb == 1 || nb <= 0)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	while (root * root <= nb)
	{
		if (nb % root == 0)
			return (0);
		++root;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		return (2);
	while (nb > 0)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		++nb;
	}
	return (nb);
}
 