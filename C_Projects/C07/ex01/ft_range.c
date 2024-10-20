/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 07:52:46 by eunlu             #+#    #+#             */
/*   Updated: 2024/09/05 08:31:21 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p_array;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	p_array = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		p_array[i] = min;
		++min;
		++i;
	}
	return (p_array);
}
