/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strspli1_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:20:13 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:20:14 by anthelix         ###   ########.fr       */
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

int		ft_strcount(char const *s, char c)
{
	int		count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		if (s[i - 1] != c)
			count++;
	}
	return (count);
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

static char	*ft_strsep(char const *s, int len, long i)
{
	char	*str;

	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0)
		str[len--] = s[i--];
	return (str);
}

static char	**ft_strsubsplit(char const *s, char **arr, int arr_len, char c)
{
	int		index;
	int		str_len;
	long	i;

	i = 0;
	index = 0;
	while (index < arr_len)
	{
		str_len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			str_len++;
		}
		if (s[i] == '\0' || s[i] == c)
			arr[index++] = ft_strsep(s, str_len, i - 1);
	}
	arr[index] = NULL;
	return (arr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		arr_len;
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr_len = ft_strcount(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * arr_len + 1)))
		return (NULL);
	return (ft_strsubsplit(s, arr, arr_len, c));
}


int main()
{
	char *str = "*hello*fellow***students*";
	char c = '*';
	char	*result;

	result = *ft_strsplit(str, c);
    
  printf("Here is the result: %s", result);       

	return (0);
}
// int main ()
// {
//   char str[] = 
//   char pch;
//   printf ("Splitting string \"%s\" into tokens:\n",str);
//   pch = **ft_strsplit(str, );
//   while (pch)
//   {
//     printf ("%c\n",pch);
//     pch = **ft_strsplit(NULL, '*');
//   }
//   return 0;
// }
