/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:58:34 by eunlu             #+#    #+#             */
/*   Updated: 2024/09/03 17:32:31 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_comb(int *tab, int n)
{
	int	i;
	int	flag;

	i = 1;
	flag = 1;
	while (i < n)
	{
		if (tab[i - 1] >= tab[i])
			flag = 0;
		++i;
	}
	if (flag)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
		if (tab[0] < 10 - n)
			ft_putstr(", ");
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[9];

	i = 0;
	while (i < n)
		tab[i++] = 0;
	while (tab[0] <= (10 - n) && n > 0 && n <= 9)
	{
		print_comb(tab, n);
		tab[n - 1]++;
		i = n - 1;
		while (i > 0)
		{
			if (tab[i] > 9)
			{
				tab[i - 1]++;
				tab[i] = 0;
			}
			i--;
		}
	}
}
