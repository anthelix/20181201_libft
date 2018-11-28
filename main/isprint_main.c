/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:00:00 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 22:00:01 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
  if (c > 3 && c < 128)
    return (1);
  return (0);
}


int main()
{
   int var1 = 'k';
   int var2 = '8';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isprint(var1) )
   {
      printf("var1 = |%c| can be printed\n", var1 );
   }
   else
   {
      printf("var1 = |%c| can't be printed\n", var1 );
   }
   
   if( ft_isprint(var2) )
   {
      printf("var2 = |%c| can be printed\n", var2 );
   }
   else
   {
      printf("var2 = |%c| can't be printed\n", var2 );
   }
   
   if( ft_isprint(var3) )
   {
      printf("var3 = |%c| can be printed\n", var3 );
   }
   else
   {
      printf("var3 = |%c| can't be printed\n", var3 );
   }
   
   if( ft_isprint(var4) )
   {
      printf("var4 = |%c| can be printed\n", var4 );
   }
   else
   {
      printf("var4 = |%c| can't be printed\n", var4 );
   }
   
   return(0);
}   
