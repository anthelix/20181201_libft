/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 16:18:45 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/26 16:39:14 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assigne la valeur ’\0’ à tous les caractères de la chaîne passée en paramètre.
#include "libft.h"

void	ft_strclr(char *s)
{
	while (*s != '\0')
		*s++ = '\0';
}
