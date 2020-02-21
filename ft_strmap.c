/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:04:37 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/29 13:59:57 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p_s;
	int		i;

	if (s && f)
	{
		i = 0;
		p_s = (char*)s;
		if (!(p_s = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[i])
		{
			p_s[i] = (f(s[i]));
			i++;
		}
		p_s[i] = '\0';
		return ((char*)p_s);
	}
	return (NULL);
}
