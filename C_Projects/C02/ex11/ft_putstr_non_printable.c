/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:34:54 by eunlu             #+#    #+#             */
/*   Updated: 2024/08/22 15:15:57 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*x;
	char	div;
	char	mod;

	x = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			div = x[(unsigned char)str[i] / 16];
			mod = x[(unsigned char)str[i] % 16];
			write(1, &div, 1);
			write(1, &mod, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
