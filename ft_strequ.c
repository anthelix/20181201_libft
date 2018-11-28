/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:44:50 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 20:25:58 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compare lexicographiquement s1 et s2. Si les deux chaînes sont égales, 
//la fonction retourne 1, ou 0 sinon.

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		return (ft_strcmp(s1, s2) ? 0 : 1);
	}
	return (0);
}
