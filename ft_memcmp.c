/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:10:41 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 19:36:13 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compare les n premiers octets des zones mémoire s1 et s2. Elle renvoie un entier 
//inférieur, égal, ou supérieur à zéro, si s1 est respectivement inférieure, 
//égale ou supérieur à s2.
//renvoie un entier négatif, nul ou positif si les n premiers octets de s1 sont
//respectivement inférieurs, égaux ou supérieurs aux n premiers octets de s2
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *p_s1;
	unsigned char *p_s2;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		else
			i++;
	}
	return (0);
}
//tq que *s1 != *s2 ret *s1 - s2; ++
