/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:29:55 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:29:55 by anthelix         ###   ########.fr       */
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



void	*ft_memalloc(size_t size)
{
    char	*t;
    
    if ((t = malloc(size)) == NULL)
        return (NULL);
    while (size > 0)
        t = malloc(size--);
    return (t);
}

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size);
	ft_putchar('\0');
	return (str);
}


// char	*ft_strncpy(char *dest, const char *src, size_t n)
// {
// 	size_t i;

// 	i = 0;
// 	while ((src[i] != '\0') && (i < n))
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	return (dest);
// }

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
    char	*c1;
    char	*c2;
    int		i;
    
    i = 0;
    if (n == 0 || s1 == s2)
        return (s1);
    c1 = (char *)s1;
    c2 = (char *)s2;
    while (n > 0 && c2[i])
    {
        c1[i] = c2[i];
        i++;
        n--;
    }
    *c1 = *c2;
    return (s1);
}

char  *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *new;
    
    
    j = start;
    new = ft_strnew(len);
    i = 0;
    while (i < len)
    {
      new[i] = s[j];
      i++;
      j++;
    }
  return (new);
}


int main()
{
    char string[] = "Hello world";
    printf("result: %s", ft_strsub(string, 6, 5));
    return (0);
}




