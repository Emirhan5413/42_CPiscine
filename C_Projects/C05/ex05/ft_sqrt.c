/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:33:28 by eunlu             #+#    #+#             */
/*   Updated: 2024/08/27 14:48:07 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	if (nb < 0)
		return (0);
	while (root * root < nb)
		++root;
	if (root * root > nb)
		return (0);
	else
		return (root);
}
