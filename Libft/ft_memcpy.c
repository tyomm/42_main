/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:28:07 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:46:23 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	
	char *src  = NULL;
	char *dest = NULL;

	//memcpy(dest, src, 2);
	printf("{%s}memcpy\n", dest);

	ft_memcpy(dest, src, 2);
	printf("{%s}ft_memcpy\n", dest);
	
	return (0);
}
*/
