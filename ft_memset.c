/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:11:04 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/26 17:54:11 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//remplit les n premiers octets de la zone mémoire pointée par s avec l'octet c.
//renvoie un pointeur sur la zone mémoire s.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p_s;

	p_s = (char *)s;
	while (n > 0)
	{
		*p_s = c;
		p_s++;
		n--;
	}
	return ((void *)s);
}
