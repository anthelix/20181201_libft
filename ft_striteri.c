/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 09:27:51 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/28 10:04:32 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Applique la fonction f à chaque caractère de la chaîne de caractères passée en 
//paramètre en précisant son index en premier argument. Chaque caractère est passé 
//par adresse à la fonction f afin de pouvoir être modifié si nécessaire.
//rien
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (*s)
			f(i++, s++);
	}
}
