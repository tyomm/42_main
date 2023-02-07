/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:32:43 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 07:51:02 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
	{
		p = (char *)malloc(1);
		if (!p)
			return (NULL);
		*p = 0;
		return (p);
	}
	p = (char *)ft_calloc(len + 1, 1);
	if (!p)
		return (NULL);
	s += start;
	i = -1;
	while (s[++i] && i < (int)len)
		p[i] = s[i];
	return (p);
}

/*
int main()
{
	char	*p;
	char	str[] = "abcdefg";
	
	p = ft_substr(str, 6, 6);
	printf("%s", p);

	return (0);
}
*/
