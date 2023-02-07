/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 06:58:59 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 06:59:57 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ((void)(NULL));
	i = 0;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
}

/*
int main()
{
    char str[] = "hello babe";
    ft_putstr_ft(str, 1);
    return (0);
}
*/
