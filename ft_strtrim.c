/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:18:57 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/30 17:57:25 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*k;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	if (!(k = (char*)malloc(i * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s || s[i] != '\0')
	{
		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		{
			i++;
		}
		while (!(s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		{
			k[j] = s[i];
			j++;
			i++;
		}
	}
	return (i > 0 ? k : NULL);
}
