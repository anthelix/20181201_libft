/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:00:30 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 22:00:31 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

int ft_toupper(int c)
{
  if (c >= 97 && c <= 122)
    c -= 32;
  return (c);
}

int main()
{
   int i = 0;
   char c;
   char str[] = "Tutorials Point";
   
   while(str[i])
   {
      ft_putchar(ft_toupper(str[i]));
      i++;
   }
   
   return(0);
}
