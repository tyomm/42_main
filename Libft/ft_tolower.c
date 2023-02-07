/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 07:51:31 by arsarkis          #+#    #+#             */
/*   Updated: 2023/01/31 07:51:38 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int chr)
{
	if (chr >= 65 && chr <= 90)
	{
		chr += 32;
		return (chr);
	}
	else
		return (chr);
}

/*
int main()
{
	char x = 'P';
	printf("%d", ft_tolower(x));  // mine
	printf("\n%d", tolower(x));      // original
	return (0);
}
*/
