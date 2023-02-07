/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:49:30 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 07:43:34 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc((sizeof(char) * ft_strlen(s1)) + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
int	main()
{
	char *meow;
	char str[] = "afsdf";
	
	meow = ft_strdup(str);

	printf("%s", meow);
	return (0);
}
*/
