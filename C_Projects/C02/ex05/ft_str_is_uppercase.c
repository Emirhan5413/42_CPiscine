/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:05:23 by eunlu             #+#    #+#             */
/*   Updated: 2024/08/22 13:09:54 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	len;
	unsigned int	i;

	i = 1;
	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] <= 'Z' && str[len] >= 'A')
			i = 1;
		else
			return (0);
		len++;
	}
	return (i);
}
