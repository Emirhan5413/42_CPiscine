/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:25:20 by eunlu             #+#    #+#             */
/*   Updated: 2024/10/07 12:06:57 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(unsigned char *str)
{
	unsigned int	len;
	unsigned int	i;

	i = 1;
	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] <= 'z' && str[len] >= 'a')
			i = 1;
		else if (str[len] <= 'Z' && str[len] >= 'A')
			i = 1;
		else
			return (0);
		len++;
	}
	return (i);
}
