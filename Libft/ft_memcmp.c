/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsarkis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:55:04 by arsarkis          #+#    #+#             */
/*   Updated: 2023/02/01 15:46:48 by arsarkis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if (*(unsigned char *)(ptr1 + i) != *(unsigned char *)(ptr2 + i))
			return (((unsigned char *)ptr1)[i] - ((unsigned char *)ptr2)[i]);
		i++;
	}
	return (0);
}

/*
int main ()
{
   if (*(unsigned char *)(ptr1 + i) != *(unsigned char *)(ptr2 + i))
		return (*(unsigned char *)(ptr1 + i) - *(unsigned char *)(ptr2 + i));
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDAAAAEF", 10);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) 
   {
      printf("str2 is less than str1");
   }
   else if(ret < 0)
   {
      printf("str1 is less than str2");
   } else
   {
      printf("str1 is equal to str2");
   }

   return(0);
}
*/
