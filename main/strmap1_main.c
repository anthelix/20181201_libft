/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:25:34 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:25:35 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size);
	ft_putchar('\0');
	return (str);
}

char *ft_strmap(char const *s, char (*f)(char))
{
  int i;
  char *str;
  
  i = 0;
  str = ft_strnew(ft_strlen(s));
  while (s[i])
    str[i++] = f(s[i++]);
  return (str);
}

int main()
{
  char *string = "hello";
  
  
  printf("old string: %s", string);
  printf("new string: %s", ft_strmap(string, ft_toupper(string));
  return (0);
}
