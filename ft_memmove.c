/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:15:07 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/29 13:57:24 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_dest;
	unsigned char	*p_src;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	i = 0;
	if (dest || src)
	{
		while (i < n)
		{
			if (p_src > p_dest)
				p_dest[i] = p_src[i];
			if (p_src < p_dest)
				p_dest[n - i - 1] = p_src[n - i - 1];
			i++;
		}
		return ((void*)(dest));
	}
	return (0);
}
