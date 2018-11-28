/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:53:34 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:53:36 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void  *ft_memset(void *s, int c, size_t n)
{
  size_t  i;
  char *s2;
  
  i = 0;
  s2 = s;
  while (i < n)
  {
    s2[i] = c;
    i++;
  }
  return (&s2);
}
int main ()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}
