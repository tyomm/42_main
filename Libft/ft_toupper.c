/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 07:52:17 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 07:52:50 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int chr)
{
	if (chr >= 97 && chr <= 122)
	{
		chr -= 32;
		return (chr);
	}
	else
		return (chr);
}

/*
int main()
{
	char x = ' ';
	char y = ' ';
	printf("%d", ft_toupper(x));

	printf("\n %d", toupper(y));
	return (0);
}
*/
