/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:24:44 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/18 11:41:04 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ======== FINISHED =========

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	dst_length;
	size_t	src_length;
	size_t	i;
	size_t	j;

	if (!dst || !src)
		return (0);
	j = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen((char *)src);
	i = dst_length;
	if (destsize <= dst_length)
		return (src_length + destsize);
	while (src && src[j] && dst_length + 1 < destsize)
	{
		dst[dst_length] = src[j];
		j++;
		dst_length++;
	}
	dst[dst_length] = '\0';
	return (i + src_length);
}

/*
int main()
{
    char dst[20] = "Hello ";
    char src[] = "world!";
    size_t dstsize = sizeof(dst);
	
    strlcat(dst, src, dstsize); // === Origin ===
    printf("Concatenated string: %s\n", dst);
    printf("Size of concatenated string: %lu\n", strlen(dst));

	printf("============\n");


	ft_strlcat(dst, src, dstsize); // === Mine ===
    printf("Concatenated string: %s\n", dst);
    printf("Size of concatenated string: %lu\n", strlen(dst));
	return (0);
}
*/
