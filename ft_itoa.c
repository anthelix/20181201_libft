/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:50:47 by schatagn          #+#    #+#             */
/*   Updated: 2018/12/04 12:46:56 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	long	nbr;
	int		sign;

	nbr = n;
	len = 1;
	sign = 0;
	while ((nbr = (nbr / 10)))
		len++;
	if (n < 0)
		sign = 1;
	s = ft_strnew(len + sign);
	ISNULL(s);
	if (n < 0)
		s[0] = '-';
	s[len + sign] = '\0';
	while (len > 0)
	{
		len--;
		s[len + sign] = (sign ? -(n % 10) : (n % 10)) + '0';
		n = n / 10;
	}
	return (s);
}
