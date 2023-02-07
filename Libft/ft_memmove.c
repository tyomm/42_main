/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 09:57:00 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:47:50 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_meow(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*temp_dst;
	unsigned const char	*temp_src;

	i = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned const char *)src;
	if (dst && src && temp_dst > temp_src)
	{
		i = len;
		while (i-- > 0)
			temp_dst[i] = temp_src[i];
	}
	else if (dst && src && temp_dst <= temp_src)
	{
		while (i < len)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return ((unsigned char *)temp_dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	return (ft_meow(dst, src, len));
}

/*
int main()
{
	char str1[] = "meow meow";
    char str2[20];

    memmove(str2, str1, strlen(str1) + 1);
    printf("str2: %s\n", str2);


    ft_memmove(str2, str1, strlen(str1) + 1);
    printf("Mine --> str2: %s\n", str2);

	return (0);
}
*/
