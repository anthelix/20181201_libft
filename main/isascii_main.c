/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:59:33 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:59:35 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
  if (c > -1 && c < 128)
    return (1);
  return (0);
}

int main()
{
   int var1 = 'É';
   int var2 = '2';
   int var3 = 'E';
   
  if(ft_isascii(var1) )
   {
      printf("var1 = |%c| is ascii\n", var1 );
   }
   else
   {
      printf("var1 = |%c| is not an ascii\n", var1 );
   }
   
  if(ft_isascii(var2) )
   {
      printf("var2 = |%c| is an ascii\n", var2 );
   }
   else
   {
      printf("var2 = |%c| is not an ascii\n", var2 );
   }
  if(ft_isascii(var3) )
   {
      printf("var3 = |%c| is an ascii\n", var3 );
   }
   else
   {
      printf("var3 = |%c| is not an ascii\n", var3 );
   }
  return (0);
}
