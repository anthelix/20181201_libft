/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:14:47 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/29 12:35:26 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*k;

	k = NULL;
	if ((k = (unsigned char*)malloc(size * sizeof(unsigned char))))
		ft_bzero(k, size);
	return ((void *)(k));
}
