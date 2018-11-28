/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 13:52:47 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 15:13:46 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//examine les n premiers octets de la zone mémoire pointée par s à la recherche 
//du caractère c. Le premier octet correspondant à c (interprété comme un unsigned
//char) arrête l'opération.
//envoient un pointeur sur l'octet correspondant, ou NULL si le caractère n'est 
//pas présent dans la zone de mémoire concernée.


#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *p_s;

	p_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p_s[i] == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}
