/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 07:39:09 by eunlu             #+#    #+#             */
/*   Updated: 2024/10/12 17:11:45 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*p1;
	int		i;

	len = ft_strlen(src);
	p1 = malloc(len + 1);
	i = 0;
	while (i < len)
	{
		p1[i] = src[i];
		++i;
	}
	p1[len] = '\0';
	return (p1);
}
