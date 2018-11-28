/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:31:13 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:31:13 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *s1, const char *s2)
{
    int		i;
    int		j;
    
    i = 0;
    j = 0;
    while (s1[j])
        j++;
    while (s2[i])
    {
        s1[j] = s2[i];
        j++;
        i++;
    }
    return (s1);
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

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

char	*ft_strnew(size_t size)
{
    char *str;
    
    str = ft_memalloc(size);
    ft_putchar('\0');
    return (str);
}

int		ft_strlen(const char *str)
{
    int		i;
    
    i = 0;
    while (str[i])
        i++;
    return (i);
}
char	*ft_strdup(const char *src)
{
    char	*dest;
    int		i;
    
    dest = (char *)malloc(sizeof(src + 1));
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
    char *dst2;
    char *src2;
    size_t  i;
    
    i = 0;
    dst2 = (char *)dst;
    src2 = (char *)src;
    if (dst < src)
        ft_memcpy(dst, src, n);
    if (dst > src)
    {
        while (n--)
            dst2[n] = src2[n];
    }
    return (0);
}
char	*ft_strcpy(char *dest, const char *src)
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
//VERSION 1 VERSION 1 VERSION
char  *ft_strjoin(char const *s1, char const *s2)
{
    //malloc for both strings
    //strlen of both strings
    //memmove or strcpy
    //strcat
    int lens1;
    int lens2;
    
    char *temp;
    
    lens1 = ft_strlen(s1);
    lens2 = ft_strlen(s2);
    
    temp = ft_strnew(sizeof(lens1 + lens2));
    // ft_putchar('\0');
    temp = ft_strcpy(temp, s1);
    //temp = ft_strcpy(temp, s2)
    temp = ft_strcat(temp, s2);
    return (temp);
}


int main()
{
    char const *s1 = "Hello";
    char const *s2 = "world";
    
    printf("%s", ft_strjoin(s1, s2));
    return (0);
}
