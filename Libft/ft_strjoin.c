/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:58:37 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/24 15:59:28 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			i;
	size_t			j;
	size_t			total_length;
	char			*p;

	j = 0;
	i = 0;
	total_length = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc((total_length * sizeof(char)) + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0')
	{	
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}

/*
int main()
{
	char	*ptr;
	char	str1[] = "hello";
	char	str2[] = "baby";

	ptr = ft_strjoin(str1, str2);

	printf("%s", ptr);
}
*/
