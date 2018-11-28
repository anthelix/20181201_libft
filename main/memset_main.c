/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:44:21 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/26 17:50:08 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);

int		main(void)
{
	char str[40];
	strcpy(str, "this shot doesn't full it again");
	puts(str);

	ft_memset(str, '$', 7);
	puts(str);

	return (0);
}
