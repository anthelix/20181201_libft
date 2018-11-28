/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:15:07 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 18:44:30 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copie n octets de la zone de mémoire src vers la zone dest. Les deux zones 
//peuvent se chevaucher : la copie se passe comme si les octets de src étaient 
//d'abord copiés dans une zone temporaire qui ne chevauche ni src ni dst, et les 
//octets sont ensuite copiés de la zone temporaire vers dest.
//renvoie un pointeur sur dest.



#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *p_dest; 
	unsigned char *p_src;

	p_src = (unsigned char *)src;
	p_dest = (unsigned char *)dest;
	i = 0;
	if (dest || src)
	{
		if (p_src > p_dest)
		{
			while (i < n)
			{
				p_dest[i] = p_src[i];
				i++;
			}
		}	
		if (p_src < p_dest)
		{
			while (i < n)
			{
				p_dest[n - i - 1] = p_src[n - i - 1];
				i++;
			}
		}
		return ((void*)(dest));
	}
	return (0);
}
