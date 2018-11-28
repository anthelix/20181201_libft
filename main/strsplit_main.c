/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:12:55 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:12:57 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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


size_t		ft_strlen(const char *str)
{
    int		i;
    
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

void	ft_memdel(void **ap)
{
    free(*ap);
    *ap = NULL;
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = -1;
	str = ft_strnew(ft_strlen(s));
	while (s[++i])
		str[i] = f(s[i]);
	return (str);
}

// int		ft_strcount(char const *s, char c)
// {
// 	int		count;
// 	size_t	i;

// 	i = 0;
// 	count = 0;
// 	while (s[i])
// 	{
//   	if (s[i - 1] != c)
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }


char	*ft_striter(char *s, void (*f)(char))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(s[i]);
		i++;
	}
}



char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t		i;
    size_t		j;
    char		*new;
    
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

// char	*ft_strnew(size_t size)
// {
//     char *str;
    
//     str = ft_memalloc(size);
//     ft_putchar('\0');
//     return (str);
// }

static int		ft_indexfinder(const char *s, char c)
{
	int		count;
	int		flag;

	flag = 1;
	count = 0;
	while (*s)
	{
		if (flag == 0 && *s == c)
			flag = 1;
		if (flag == 1 && *s != c)
		{
			flag = 0;
			count++;
		}
		s++;
	}
	return (count);
}

// int main()
// {
//   char *str = "*hello*fellow***students*";
//   char c = '*';
//   int	result;
  
//   result = ft_cnt_parts(str, c);
  
//   printf("%d\n", result);
  
//   return (0);
// }

static int		ft_strlenc(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s++ != c) 
		len++;
	return (len);
}

// int main()
// {
//   char *str = "hello*fellow***students*";
// 	char c = '*';
// 	int wlen;
	
// 	wlen = ft_wlen(str, c);
// 	printf("Here is the output of wlen: %d\n", wlen);
// }

char			**ft_strsplit(char const *s, char c)
{
	char	**newstr;
	int		index;
	int		i;

	i = 0;
	index = ft_indexfinder(s, c);
	newstr = ft_strnew(sizeof(*newstr) * (ft_indexfinder(s, c)));
	while (index--)
	{
		while (*s == c)
			s++;
		newstr[i] = ft_strsub(s, 0, ft_strlenc(s, c));
		s = s + ft_strlenc(s, c);
		i++;
	}
	return (newstr);
}


int main()
{
	char *str = "*hello*fellow***students*";
	char c = '*';
  int count;
	char	**result;

  count = ft_indexfinder(str, c);
  result = ft_strsplit(str, c);
 
  printf("Here is ft_cnt_pars output: %d\n", count);  
  printf("Here is result[0]: %s\n", result[0]);       
  printf("Here is result[1]: %s\n", result[1]);
  printf("Here is result[2]: %s\n", result[2]);
	return (0);
}
