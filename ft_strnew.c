/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:19:26 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/28 10:42:58 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Alloue (avec malloc(3)) et retourne une chaîne de caractère “fraiche” terminée 
//par un ’\0’. Chaque caractère de la chaîne est initialisé à ’\0’. 
//Si l’allocation echoue, la fonction renvoie NULL.

#include "libft.h"

char	*ft_strnew(size_t size)
{
	if (size)
		return (ft_memalloc(size + 1));
	return (0);
}
