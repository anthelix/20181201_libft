/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 11:25:14 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/28 12:42:25 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applique la fonction f à chaque caractère de la chaîne de caractères passée 
// en paramètre en précisant son index pour créer une nouvelle chaîne 
// “fraiche” (avec malloc(3)) résultant des applications successives de f.
// 

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	char	*p_s;
	unsigned int 	i;
	
	if (s && f)
	{
		i = 0;
		p_s = (char*)s;
		if (!(p_s = ft_strnew(ft_strlen(s)))) //d'abord chaine fraiche
			return (NULL);
		while (s[i])
		{
			p_s[i] = (f(i, s[i]));
			i++;
		}
		p_s[i] = '\0';
		return ((char*)p_s);
			
	}
	return (NULL);
}
