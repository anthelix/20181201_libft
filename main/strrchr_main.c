/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:13:55 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:13:58 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
  int i;
  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	see;
	int		len;

	str = (char *)s;
	see = (char)c;
	len = ft_strlen(str);
	while ((len != 0) && str[len] != see)
		len--;
	if (str[len] == see)
		return (&str[len]);
	return (NULL);
}

int main ()
{
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 't';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}
