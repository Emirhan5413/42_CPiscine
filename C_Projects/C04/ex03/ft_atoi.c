/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:29:41 by eunlu             #+#    #+#             */
/*   Updated: 2024/09/05 01:51:27 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*eliminate_space(char *number)
{
	while ((*number >= 9 && *number <= 13) || *number == ' ')
		++number;
	return (number);
}

char	*check_sign(char *number, int *sign)
{
	while (*number == '-' || *number == '+')
	{
		if (*number == '-')
			*sign *= -1;
		++number;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	str = eliminate_space(str);
	str = check_sign(str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (*str - '0');
		++str;
	}
	return (result * sign);
}
