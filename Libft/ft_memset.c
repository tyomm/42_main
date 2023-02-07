/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 06:48:20 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:49:20 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t count)
{
	size_t	i;
	char	*str;

	str = (char *)ptr;
	i = 0;
	while (i < count)
	{
		*str = x;
		i++;
		str++;
	}
	return (ptr);
}

/*
int main()
{
	int buffer[10] = {1, 2, 3, 4};

	printf("%s--\n", memset(buffer, 52, sizeof(int) * 2));

	printf("%s-------\n", ft_memset(buffer, 52, sizeof(int) * 2));

	
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", buffer[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/
