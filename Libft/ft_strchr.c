/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:06:51 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 07:42:41 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str++)
			return (0);
	}
	return ((char *) str);
}

/*
int main()
{
	char str[6] = "asdAfg";
//	printf("%s", strchr(str, 65));

	printf("%s", ft_strchr(str, 65));
	return (0);
}
*/
