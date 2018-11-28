/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:40:42 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 20:40:44 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char  *ft_strchr(const char *str, int c)
{
  while (*str != c)
  {
    if (*str == '\0')
      return (NULL);
    str++;
  }
  return ((char*)str);
}

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t			i;
// 	unsigned char	cpy_c;
// 	unsigned char	*cpy_src;

// 	i = 0;
// 	cpy_c = (unsigned char)c;
// 	cpy_src = (unsigned char *)s;
// 	while (i < n)
// 	{
// 		if (cpy_src[i] == cpy_c)
// 			return (&cpy_src[i]);
// 		i++;
// 	}
// 	return (NULL);
// }


void  *ft_memchr(const void *str, int c, size_t n)
{
  size_t  i;
  unsigned char c2;
  unsigned char *str2;
  
  i = 0;
  str2 = (unsigned char*) str;
  c2 = (unsigned char)c;
  while (i < n)
  {
    if (str2[i] == c2)
      return (&str2[i]);
    i++;
  }
  return (NULL);
}

int main ()
{
   const char str[] = "/|\x12\xff\x09\x42\2002\42|\\";
   const char ch = '\200';
   char *ret;
  char *set;
   ret = ft_memchr(str, ch, 10);
   
  set  = memchr(str, ch, 10);

   printf("ft_memchr: String after |%c| is - |%s|\n", ch, ret);
   printf("\n");
   printf("memchr: String after |%c| is - |%s|\n", ch, set);

   return(0);
}
