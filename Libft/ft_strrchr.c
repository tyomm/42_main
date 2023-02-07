/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:44:49 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/16 16:11:25 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char) c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}

/*
int main()
{
	char str[7] = "ttadf";
	printf("%s", strrchr(str, 97));
	
//	printf("%s", ft_strrchr(str, 97);
	return (0);
}
*/
