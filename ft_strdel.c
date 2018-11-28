/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:42:02 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 18:48:41 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	//Prend en paramètre l’adresse d’une chaîne de caractères 
	//qui doit être libérée avec free(3) et son pointeur mis à NULL

#include "libft.h"

void ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
