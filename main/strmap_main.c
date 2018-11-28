/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:25:02 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:25:03 by anthelix         ###   ########.fr       */
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

char		ft_toupper(char c)
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	new_s = ft_strnew(ft_strlen(s));
	if (new_s == NULL)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
//   int i;
//   char *str;
  
//   i = 0;
//   str = ft_strnew(ft_strlen(s));
//   while (s[i])
//   {
//     str[i] = f(i, s[i]);
//     i++;
//   }
//   return (str);
// }

int main()
{
  char *string = "hello";
  char  *newstr;
  
  printf("old string: %s\n", string);
  newstr = ft_strmapi(string, (2, ft_toupper));
  printf("new string: %s", newstr);
  return (0);
}
