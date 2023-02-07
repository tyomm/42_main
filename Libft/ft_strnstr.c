/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 17:31:29 by arsarkis          #+#    #+#             */
/*   Updated: 2023/02/02 17:31:50 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_cmp(const char *haystack, const char *needle, size_t i, size_t j)
{
	while (haystack && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && j < ft_strlen(needle))
			{
				i++;
				j++;
			}
			if (j == ft_strlen(needle))
				return (i - j);
			else if (i < ft_strlen(haystack))
			{
				i = (i - j) + 1;
				j = 0;
			}
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (haystack && !*needle)
		return ((char *)haystack);
	if (!haystack)
		return (NULL);
	if ((!*haystack) || (len == 0))
		return (NULL);
	i = ft_cmp(haystack, needle, 0, 0);
	if (i + ft_strlen(needle) > len)
		return (NULL);
	return ((char *)haystack + i);
}
