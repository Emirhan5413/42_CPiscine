/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 01:36:40 by eunlu             #+#    #+#             */
/*   Updated: 2024/09/05 02:05:53 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}

int	check_valid(char *base)
{
	int	len;
	int	i;
	int	j;

	len = ft_strlen(base);
	if (base[0] == '\0' || len == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] <= 32 || base[i] >= 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	if (!check_valid(base))
		return ;
	len_base = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / len_base), base);
		ft_putnbr_base(-(nbr % len_base), base);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr < len_base)
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base(nbr / len_base, base);
		ft_putnbr_base(nbr % len_base, base);
	}
}
