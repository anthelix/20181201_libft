/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 10:33:21 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/23 10:26:37 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ajoute la chaîne src à la fin de la chaîne dest en écrasant le caractère nul 
//(« \0 ») à la fin de dest, puis en ajoutant un nouveau caractère nul final. 
//Les chaînes ne doivent pas se chevaucher, 
//et la chaîne dest doit être assez grande pour accueillir le résultat.

#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	t_count		l_dest;
	t_count		i;
	
	//ISNULL(dest);
	//ISNULL(src);
	l_dest = 0;
	i = 0;
	l_dest = ft_strlen(dest);
	while (src[i])
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	dest[l_dest + i] = '\0';
	return (dest);
}
