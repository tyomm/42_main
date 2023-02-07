/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 07:00:45 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 07:37:09 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	plus_i(char const *s, char c, int i)
{
	while (s[i] == c)
		i++;
	return (i);
}

int	word_len(char const *s, char c, int i)
{
	int	count;

	count = 0;
	i = plus_i(s, c, i);
	while (s[i] != c)
	{
		count++;
		if (s[i] == '\0' && s[i - 1] != c)
		{
			count -= 1;
			break ;
		}
		i++;
	}
	return (count);
}

void	check_memory(char **p, int i)
{
	if (!p[i])
	{
		free(p);
		return ((void)(NULL));
	}
}

char	**fill(char const *s, char c, char **p)
{
	int		i;
	int		j;
	size_t	index;

	index = 0;
	i = 0;
	while (s[index] != '\0')
	{
		j = 0;
		index = plus_i(s, c, index);
		if (s[index] == '\0')
			break ;
		p[i] = (char *)malloc((word_len(s, c, index) + 1) * sizeof(char));
		check_memory(p, i);
		while (s[index] != c && index < ft_strlen(s))
		{
			p[i][j++] = s[index];
			index++;
		}
		p[i++][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		if (s[i])
			i++;
	}
	p = (char **)malloc(sizeof(char *) * (j + 1));
	if (!p)
		return (NULL);
	return (fill(s, c, p));
}

/*
int main() 
{ 
  char  str[] = ",,,,,, d,f "; 
  char  c = ','; 
  char** m = ft_split(str, c);
  for(int i = 0; m[i] != NULL; i++)
    printf("%s\n", m[i]);
  //printf("\n");
  return 0; 
}
*/