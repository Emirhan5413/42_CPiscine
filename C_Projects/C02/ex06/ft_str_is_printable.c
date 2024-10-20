/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:07:48 by eunlu             #+#    #+#             */
/*   Updated: 2024/08/24 10:33:24 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	len;
	unsigned int	i;

	i = 1;
	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] <= 126 && str[len] >= 32)
			i = 1;
		else
			return (0);
		len++;
	}
	return (i);
}
