/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 10:04:37 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/28 12:29:16 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applique la fonction f à chaque caractère de la chaîne de caractères passée en 
// paramètre pour (1) créer une nouvelle chaîne “fraiche” (avec malloc(3)) résultant 
// des (2)applications successives de f.
// La chaîne “fraiche” résultant des applications successives de f. Malloc



char 	*ft_strmap(char const *s, char (*f)(char))
{
	char	*p_s;
	int		i;

	if (s && f)
	{
		i = 0;
		p_s = (char*)s;
		if (!(p_s = ft_strnew(ft_strlen(s)))) //d'abord chaine fraiche
			return (NULL);
		while (s[i])							//application de f
		{
			p_s[i] = (f(s[i]));
			i++;
		}
		p_s[i] = '\0';
		return ((char*)p_s);
	}
	return (NULL);
}
