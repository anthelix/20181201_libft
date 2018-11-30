/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:06:32 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/29 14:17:47 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*p_s1;
	char	*p_s2;
	char	*res;

	res = NULL;
	if (s1 && s2)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		p_s1 = (char*)s1;
		p_s2 = (char*)s2;
		if ((res = ft_strnew(len_s1 + len_s2)))
		{
			res = ft_strcpy(res, s1);
			res = ft_strcat(res, s2);
		}
	}
	return (res);
}
