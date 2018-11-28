/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:58:05 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:58:07 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
  if (c > 47 && c < 58)
    return (1);
  return (0);
}


int main()
{
   int var1 = 'h';
   int var2 = '2';
    
   if( ft_isdigit(var1) ) //replace function name to test
   {
      printf("var1 = |%c| is a digit\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not a digit\n", var1 );
   }
   
   if( ft_isdigit(var2) )
   {
      printf("var2 = |%c| is a digit\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not a digit\n", var2 );
   }
   
   return(0);
}
