/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 14:26:15 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/27 09:33:06 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	sign = (*str == '-' ? -1 : 1);
	if ((sign == -1) || (*str == '+'))
		str++;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0') * sign;
		str++;
	}
	return (res);
}
// #include <stdlib.h>
// #include <stdio.h>
// int		main(void)
// {
// 	printf("atoi : %d\nft_atoi : %d\n", atoi("99999999999999999999999999"),
// 		atoi("99999999999999999999999999"));
// 	return (0);
// }
