/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:36:12 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/18 12:50:43 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && str1[i] == str2[i] && i < n)
		i++;
	if (i < n)
		return (str1[i] - str2[i]);
	else
		return (0);
}

/*
int main()
{
	char x[] = "a";
	char y[] = "b";
	printf("%d ", ft_strncmp(x, y, 1));
	return (0);
}
*/
