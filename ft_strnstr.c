/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 10:54:08 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/26 13:00:17 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l_nee;

	l_nee = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == needle[l_nee])
			l_nee++;
		else
			l_nee = 0;
		if ((needle[l_nee]) == '\0')
			return ((char*)(haystack - l_nee + 1));
		haystack++;
	}
	return (NULL);
}
