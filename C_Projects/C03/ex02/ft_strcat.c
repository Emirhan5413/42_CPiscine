/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:02:50 by eunlu             #+#    #+#             */
/*   Updated: 2024/08/26 19:07:54 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len_dest;

	i = 0;
	len_dest = 0;
	while (dest[len_dest] != '\0')
		len_dest ++;
	while (src[i] != '\0')
	{
		dest[len_dest] = src[i];
		len_dest ++;
		i ++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
