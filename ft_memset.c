/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:11:04 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/29 12:35:49 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p_s;

	p_s = (unsigned char *)s;
	while (n > 0)
	{
		*p_s = c;
		p_s++;
		n--;
	}
	return ((void *)s);
}
