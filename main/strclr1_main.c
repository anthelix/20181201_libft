/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strclr1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:43:10 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:43:11 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void  ft_strclr(char *s)
{
  int i;
  i = 0;
  while (s[i])
    s[i] = '\0';
    i++;
}

// void	ft_strclr(char *s)
// {
// 	while (*s != '\0')
// 	{
// 		*s = '\0';
// 		s++;
// 	}
// }

int main()
{
  char s[] = "hello";
  
  printf("this is before strclr: %s \n", s);
  ft_strclr(&s);
  printf("this is after: %c", s);
  return (0);
}
