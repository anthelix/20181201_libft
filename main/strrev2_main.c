/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev2_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:29:05 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:29:06 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int   ft_intlen(int value)
{
  int i = 0;
  while (value)
  {
    value /= 10;
    i++;
  }
  return (i);
}

int   ft_strlen(const char *str)
{
  int   i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  *ft_memalloc(size_t size)
{
  char  *t;

  if ((t = malloc(size)) == NULL)
    return (NULL);
  while (size > 0)
    t = malloc(size--);
  return (t);
}

char  *ft_strnew(size_t size)
{
  char *str;

  str = ft_memalloc(size);
  ft_putchar('\0');
  return (str);
}

char  *ft_strcpy(char *dest, const char *src)
{
  int i;

  i = 0;
  while (src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}


void  ft_strrev(char *s)
{
  int i;
  int j;
  char  temp;
  char  *string = ft_strnew(sizeof(s));
  ft_strcpy(string, s);
  i = 0;
  j = ft_strlen(string) - 1;
  while (i < j)
  {
    temp = string[j];
    string[j] = string[i];
    string[i] = temp;
    i++;
    j--;
  }
}


// /* reverse:  reverse string s in place */
// void reverse(char s[])
// {
//     int i, j;
//     char c;
 
//     for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
//         c = s[i];
//         s[i] = s[j];
//         s[j] = c;
//     }
// }

 

int main()
{
    char *s = "hell";
    // char buffer[20];
    // itoa(a,buffer);   // here 2 means binary
    // printf("Binary value = %s\n", buffer);
 
    ft_strrev(s);
    printf("%s", s);


    
    return 0;
}
