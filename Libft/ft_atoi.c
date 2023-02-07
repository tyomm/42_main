/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:20:04 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:03:28 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	sig;

	sig = 1;
	nb = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sig *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str++ - '0') * sig;
		if (nb > 2147483647)
			return (-1);
		if (nb < -2147483648)
			return (0);
	}
	return (nb);
}

/*
//int main()
{
    char str[] = "-123";
    int num = ft_atoi(str);
    printf("The converted integer is: %d\n", num);

    char str2[] = "0x123";
    int num2 = ft_atoi(str2);
    printf("The converted integer is: %d\n", num2);

    return 0;
}
*/
