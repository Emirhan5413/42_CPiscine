/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 08:03:32 by eunlu             #+#    #+#             */
/*   Updated: 2024/09/05 06:55:40 by eunlu            ###   ########.fr       */
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
	if (p_array == NULL)
		return (0);
	while (min < max)
	{
		p_array[i] = min;
		++min;
		++i;
	}
	return (p_array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		range_size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	range_size = (max - min);
	return (range_size);
}
