/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 06:54:27 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:57:11 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ((void)(NULL));
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}

/*
int main()
{
    char str[] = "ghjl";
    ft_putendl_fd(str, 1);
    return (0);
}
*/
