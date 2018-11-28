/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 08:56:04 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/28 09:09:27 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Compare lexicographiquement s1 et s2 jusqu’à n caractères maximum ou bien 
// qu’un ’\0’ ait été rencontré. Si les deux chaînes sont égales, 
// la fonction retourne 1, ou 0 sinon.


int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		while (n > 0)
			n--;
		return (ft_strequ(s1, s2));
	}
	return (0);
}
