/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:14:47 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 18:52:00 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Alloue (avec malloc(3)) et retourne une zone de mémoire “fraiche”. La mémoire 
//allouée est initialisée à 0. Si l’allocation échoue, la fonction renvoie NULL.

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	if (size)
	{
		unsigned char	*k;

		if (!(k = (unsigned char*) malloc(size * sizeof(unsigned char))))
			return (NULL);
		ft_bzero(k, size);
		return ((void *)(k));
	}
	return (0);
}
