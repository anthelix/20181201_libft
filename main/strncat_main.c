/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:55:35 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:55:37 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strncat TEST
#include <stdio.h>
#include <string.h>

char  *ft_strncat(char *s1, const char *s2, size_t n)
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  while (s1[j])
    j++;
  while (s2[i] && (i < n))
  {
    s1[j] = s2[i];
    j++;
    i++;
  }
  return (s1);
}


int main ()
{
   char src[50], dest[50];

   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   strncat(dest, src, 7);

   printf("Final destination string : |%s|", dest);
   
   return(0);
}
