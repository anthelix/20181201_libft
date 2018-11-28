/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:54:48 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:54:56 by anthelix         ###   ########.fr       */
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

// void  *ft_memcpy(void *s1, const void *s2, size_t n)
// {
//   char *c1;
//   char *c2;
//   int i;
  
//   i = 0;
//   if (n == 0 || s1 == s2)
//     return (s1);
//   c1 = (char *)s1;
//   c2 = (char *)s2;
//   while (n > 0 && *(c2 +i)) //ALTERNATE WAY OF DOING IT - A LITTLE PRETENTIOUS
//   {
//     *(c1 + i) = *(c2 + i); //ALTERNATE
//     i++;
//     n--;
//   }
//   *c1 = *c2;
//   return (s1);
// }

int main ()
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];

   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 4);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
