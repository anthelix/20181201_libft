/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 09:14:13 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/28 09:53:29 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Applique la fonction f à chaque caractère de la chaîne de caractères passée 
//en paramètre. Chaque caractère est passé par adresse à la fonction f afin de 
//pouvoir être modifié si nécessaire
// retour : rien

void ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		int	i;

		i = 0;
		while (s[i] != '\0')
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
