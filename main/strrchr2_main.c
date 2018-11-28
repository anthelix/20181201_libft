/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr2_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:03:22 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 22:03:22 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strrchr(const char *s, int c) 
{
  int i;
  
  i = ft_strlen(s) + 1;
  
  while (--i >= 0)
    if (s[i] == c)
      return ((char *)s + i);
    return (NULL);
}


int main ()
{
   char *ret;
   
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'c';
   
   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
