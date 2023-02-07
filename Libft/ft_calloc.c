/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:00:12 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:05:00 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == 0 || size == 0)
		return (malloc(0));
	if ((size * count) / count != size)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

/*
int main()
{
	int	i;
	char	*p;
	
	i = 0;
	p = ft_calloc(6, sizeof(char));
	p = "abcd";
	while (p[i] != '\0')
	{
		printf("%c", p[i]);
		i++;
	}
//	printf("%c", p[i]);
	return (0);
}
*/
