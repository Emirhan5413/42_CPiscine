/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:59:31 by eunlu             #+#    #+#             */
/*   Updated: 2024/08/22 13:09:04 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	len;
	unsigned int	i;

	i = 1;
	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] <= '9' && str[len] >= '0')
			i = 1;
		else
			return (0);
		len++;
	}
	return (i);
}
