/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 10:54:08 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/30 13:30:11 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p_n;

	p_n = (char*)needle;
	if (*p_n == '\0')
		return ((char*)haystack);
	if (*haystack && len)
	{
		while (len-- && len > 0)
		{
			if (*p_n == *haystack)
				p_n++;
			else
			{
				haystack = haystack - (p_n - needle);
				len = len + (p_n - needle);  
			}
			haystack++;
			
			if (*p_n == '\0')
				return ((char*)(haystack - (p_n - needle)));
			if (*haystack == '\0')
				return (NULL);		
		}
	}
	return (NULL);
}
