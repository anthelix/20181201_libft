/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:02:04 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 22:02:05 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
  if ((c > 64 && c < 91) || (c > 96 && c < 123))
    return 1;
  return 0;
}

int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isalpha(var1) )
   {
      printf("var1 = |%c| is an alphabet\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }
   
   if( isalpha(var2) )
   {
      printf("var2 = |%c| is an alphabet\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }
   
   if( isalpha(var3) )
   {
      printf("var3 = |%c| is an alphabet\n", var3 );
   }
   else
   {
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }
   
   if( isalpha(var4) )
   {
      printf("var4 = |%c| is an alphabet\n", var4 );
   }
   else
   {
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }
   
   return(0);
}
