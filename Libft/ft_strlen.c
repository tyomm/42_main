/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 07:45:05 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 07:45:41 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int main()
{
	char x[] = "yo man";
	char y[] = {'e', 't', 'y', 'u'};

	printf("%lu", strlen(x));
	printf("\n %d", ft_strlen(y));
	return (0);
}
*/
