/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:27:08 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 20:28:36 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void bzero(void * s, size_t n)
{
  char * c = s; // Can't work with void *s directly.
  size_t i;
  for (i = 0; i < n; ++i)
    c[i] = '\0';
}
// void  ft_bzero(void *s, size_t n)
// {
//   size_t  i;
//   char *s2;
  
//   i = 0;
//   s2 = s;
//   while (i < n)
//   {
//     s2[i] = '\0';
//     ++i;
//   }
// }

int main ()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   bzero(str, 2);
   puts(str);
   
   return(0);
}
