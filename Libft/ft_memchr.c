/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:53:00 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:13:10 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	char	*p;
	size_t	i;

	p = (char *)ptr;
	i = 0;
	while (i < num)
	{
		if (p[i] == (char)value)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
