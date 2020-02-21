/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 10:54:08 by schatagn          #+#    #+#             */
/*   Updated: 2018/12/04 22:28:05 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	t_count		h;
	t_count		n;
	t_count		x;

	h = 0;
	n = 0;
	if (needle[n] == '\0')
		return ((char*)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		x = h;
		while ((haystack[x] == needle[n]) && x <= len)
		{
			x++;
			n++;
			if (needle[n] == '\0')
				return ((char*)&haystack[h]);
		}
		h++;
	}
	return (NULL);
}
