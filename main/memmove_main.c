/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:10:51 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:10:53 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void  *ft_memcpy(void *s1, const void *s2, size_t n)
{
  char *c1;
  char *c2;
  int i;
  
  i = 0;
  if (n == 0 || s1 == s2)
    return (s1);
  c1 = (char *)s1;
  c2 = (char *)s2;
  while (n > 0 && c2[i])
  {
    c1[i] = c2[i];
    i++;
    n--;
  }
  *c1 = *c2;
  return (s1);
}

void  *ft_memmove(void *dst, const void *src, size_t n)
{
  char *dst2 = dst;
  char *src2 = src;
  if (dst < src)
    ft_memcpy(dst, src, n);
  if (dst > src)
  {
    while (n--)
      dst2[n] = src2[n];
  }
  return (dst2);
}

int main ()
{
   char dest[] = "oldstring";
   const char src[]  = "newstr";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 1);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
