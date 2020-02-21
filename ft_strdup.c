/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 10:18:50 by schatagn          #+#    #+#             */
/*   Updated: 2018/12/05 11:57:34 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*k;
	int		i;

	k = NULL;
	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(k = (char *)malloc(i * sizeof(char) + 1)))
		return (NULL);
	return (ft_strcpy(k, src));
}
