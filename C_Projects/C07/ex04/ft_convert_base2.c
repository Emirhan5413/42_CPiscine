/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunlu <eunlu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:21:25 by eunlu             #+#    #+#             */
/*   Updated: 2024/09/05 14:52:00 by eunlu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	is_valid_base(char *base);
int	ft_atoi_base(char *str, char *base);

void	convert_recursive(long nb, char *base, char *result, int *index)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nb >= base_len)
		convert_recursive(nb / base_len, base, result, index);
	result[(*index)++] = base[nb % base_len];
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*result;
	long	nb;
	int		index;

	nb = nbr;
	index = 0;
	result = (char *)malloc(34);
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[index++] = '-';
		nb = -nb;
	}
	convert_recursive(nb, base, result, &index);
	result[index] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		decimal_value;
	char	*converted_value;

	if (!is_valid_base(base_from) || !is_valid_base(base_to))
		return (NULL);
	decimal_value = ft_atoi_base(nbr, base_from);
	converted_value = ft_itoa_base(decimal_value, base_to);
	return (converted_value);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
    char *nbr = "10111"; // İkili tabanda bir sayı
    char *base_from = "ABCD"; // İkili taban (Binary)
    char *base_to = "0123456789ABCDEF"; // Onaltılık taban (Hexadecimal)

    char *converted_value = ft_convert_base(nbr, base_from, base_to);

    if (converted_value != NULL)
    {
        printf("Original number: %s\n", nbr);
        printf("Converted to base %s: %s\n", base_to, converted_value);
        free(converted_value); // Belleği temizlemeyi unutmayın
    }
    else
    {
        printf("Invalid base or conversion failed.\n");
    }

    return 0;
}
