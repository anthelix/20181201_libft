/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:58:35 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:58:59 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c)
{
  if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
    return (1);
  return (0);
}



int main()
{
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isalnum(var1) ) //change the function to test
   {
      printf("var1 = |%c| is alphanumeric\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not alphanumeric\n", var1 );
   }
   
   if( ft_isalnum(var2) )
   {
      printf("var2 = |%c| is alphanumeric\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not alphanumeric\n", var2 );
   }
   
   if( ft_isalnum(var3) )
   {
      printf("var3 = |%c| is alphanumeric\n", var3 );
   }
   else
   {
      printf("var3 = |%c| is not alphanumeric\n", var3 );
   }
   
   if( ft_isalnum(var4) )
   {
      printf("var4 = |%c| is alphanumeric\n", var4 );
   }
   else
   {
      printf("var4 = |%c| is not alphanumeric\n", var4 );
   }
   return(0);
}
