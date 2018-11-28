/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:56:46 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:56:48 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(src + 1));
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	//dest[i] = src[i];
	return (dest);
}


int main()
{
    char *p1 = "Raja";
    char *p2;
    p2 = ft_strdup(p1);
 
    printf("Duplicated string is : %s", p2);
    return 0;
}
