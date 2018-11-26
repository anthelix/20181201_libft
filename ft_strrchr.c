/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:21:15 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/23 19:10:25 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p_s;

	p_s = s + ft_strlen(s);
	while (p_s != s && *p_s != c)
		p_s--;
	return (c == *p_s ? (char *)p_s : NULL);
}
