/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:02:35 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 22:02:37 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

int ft_tolower(int c)
{
  if (c > 64 && c < 91)
    c += 32;
  return c;
}

int main()
{
  int i = 0;
  char c;
  char str[] = "HELLO World";
  
  while (str[i])
  {
    ft_putchar(ft_tolower(str[i]));
    i++;
  }
  
  /*  while (str[i])
  {
    putchar(tolower(str[i]));
    i++;
  }
  */
  
  return (0);
}
