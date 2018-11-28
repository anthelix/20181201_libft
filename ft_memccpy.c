/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:57:32 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 15:11:32 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copie au plus n octets de la zone mémoire src vers la zone mémoire dest, 
//s'arrêtant dès qu'elle rencontre le caractère c.
//envoie un pointeur sur le caractère immédiatement après c dans la zone dest, 
//ou NULL si c n'a pas été trouvé dans les n premiers caractères de src.

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		if (p_src[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		i++;
	}
	return (NULL);
}
