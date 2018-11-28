/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:26:52 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:26:53 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int		ft_intlen(int value)
{
  int i = 0;
  while (value)
  {
    value /= 10;
    i++;
  }
  return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_memalloc(size_t size)
{
	char	*t;

	if ((t = malloc(size)) == NULL)
		return (NULL);
	while (size > 0)
		t = malloc(size--);
	return (t);
}

int   ft_strlen(const char *str)
{
  int   i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size);
	ft_putchar('\0');
	return (str);
}

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
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


// char  *ft_strrev(char *s)
// {
//   int i;
//   int j;
//   char  temp;
//   char  *string = ft_strnew(sizeof(s));
//   ft_strcpy(string, s);
//   i = 0;
//   j = ft_strlen(string);
//   while (i < j)
//   {

//     temp = string[i];
//     string[i] = string[j];
//     string[j] = temp;
//     i++;
//     j--;
//   }
//   return (string);
// }

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	chr_tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	while (j < i)
	{
		chr_tmp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = chr_tmp;
		j++;
		i--;
	}
	return (str);
}


char			*ft_itoa(int n)
{
  int i = 0;
  int len = ft_intlen(n);
  int neg = 0;
  char  *string = ft_strnew(sizeof(len + 1));
  
  if (n < 0)
    neg = 1;
  if (neg == 1)
  {
    n = -n;
    ft_putchar('-');
  }
  while (len > 0)
  {
    string[i] = n % 10 + '0';
    n /= 10;
    len--;
    i++;
   }

  ft_strrev(string);
  return (string);
}

/* reverse:  reverse string s in place */
void reverse(char s[])
{
    int i, j;
    char c;
 
    for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
/* itoa:  convert n to characters in s */
void itoa(int n, char s[])
{
    int i, sign;
 
    if ((sign = n) < 0)  /* record sign */
        n = -n;          /* make n positive */
    i = 0;
    do {       /* generate digits in reverse order */
        s[i++] = n % 10 + '0';   /* get next digit */
    } while ((n /= 10) > 0);     /* delete it */
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
 

int main()
{
    int a = 54325;
    char buffer[20];
    itoa(a,buffer);   // here 2 means binary
    printf("Binary value = %s\n", buffer);
 
    printf("%s", ft_itoa(a));

    
    return 0;
}
