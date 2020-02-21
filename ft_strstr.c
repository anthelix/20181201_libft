/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 19:12:57 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/26 12:12:51 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i_h;
	int		i_f;

	i_h = 0;
	i_f = 0;
	if (needle[i_f] == '\0')
		return ((char *)haystack);
	while (haystack[i_h] != '\0')
	{
		i_f = 0;
		if ((haystack[i_h]) == (needle[0]))
		{
			while ((haystack[i_h] != '\0') && (haystack[i_h] == needle[i_f]))
			{
				i_h++;
				i_f++;
			}
			if (needle[i_f] == '\0')
				return ((char *)&haystack[i_h - i_f]);
			else
				i_h = i_h - i_f;
		}
		i_h++;
	}
	return (0);
}
