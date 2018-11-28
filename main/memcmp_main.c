/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:39:03 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 20:39:20 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
  int i;
  char diff;
  
  i = 0;
  while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
    i++;
  diff = (s1[i] - s2[i]);
  return (diff);
}

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
  size_t i;
  unsigned char *str1c;
  unsigned char *str2c;
  
  i = 0;
  str1c = (unsigned char*)str1;
  str2c = (unsigned char*)str2;
  while (i < n)
  {
    if (str1c[i] != str2c[i])
      return (str1c[i] - str2c[i]);
    i++;
  }
  return (0);
}

int main ()
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "\xff\xaa\xde\x12", 10);
   memcpy(str2, "\xff\xaa\xde\x12MACOSAAAAA", 10);

   ret = ft_memcmp(str1, str2, 10);

   if(ret > 0)
   {
      printf("str2 is less than str1");
   }
   else if(ret < 0) 
   {
      printf("str1 is less than str2");
   }
   else 
   {
      printf("str1 is equal to str2");
   }
   
   return(0);
}
