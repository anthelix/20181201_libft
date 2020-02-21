/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 12:18:57 by schatagn          #+#    #+#             */
/*   Updated: 2018/12/05 11:28:38 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*k;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	k = NULL;
	if (s)
	{
		len = ft_strlen(s);
		if (s || s[i] != '\0')
		{
			while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && (i < len))
				i++;
			j = len - 1;
			while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && (j > i))
				j--;
			len = j - i + 1;
		}
		if (!(k = (char*)malloc(len * sizeof(char) + 1)))
			return (NULL);
		k = ft_strsub(s, i, len);
	}
	return (k);
}
