/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strllcat_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:38:07 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:11:01 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
} 

size_t strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1) 
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	dstlen;
// 	size_t	srclen;
// 	size_t  n;

// 	i = 0;
// 	dstlen = ft_strlen(dst);
// 	srclen = ft_strlen(src);
// 	n = size - 1;
// 	if (size <= dstlen)
// 		return (srclen + size);
// 	while (dst[i] && i < n)
// 		i++;
// 	while (*src && i < n)
// 	{
// 		dst[i] = *src;
// 		i++;
// 		src++;
// 	}
// 	dst[i] = '\0';
// 	return (dstlen + srclen);
// }

// 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i;
    size_t	dstlen;
    size_t	srclen;
    
    i = 0;
    dstlen = strlen(dst);
    srclen = strlen(src);
    if (size <= dstlen)
        return (srclen + size);
    while (dst[i] != '\0' && i < (size - 1))
		  i++;
    if (i < size)
    {
      ft_strcat(dst, src);
      i++;
    }
    *dst = '\0';
    return (dstlen + srclen);
}


int main(void)
{
              char dest[50] = "there is no stars in the sky";

              char *src = "the cake is a lie !\0I'm hidden lol\r\n";
              char dest2[50] = "there is no stars in the sky";
              char *src2 = "the cake is a lie !\0I'm hidden lol\r\n";
              
              printf("ft: %lu", ft_strlcat(dest, src, 2));
              
              printf("%s", "\n");
              printf("sl: %lu", strlcat(dest2, src2, 2));
              
              return (0);
    }
