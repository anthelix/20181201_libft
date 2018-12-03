/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:50:47 by schatagn          #+#    #+#             */
/*   Updated: 2018/12/03 17:40:18 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int		ft_isnegativ(int n)
{
	return (n < 0 ? 1 : 0);
}

char	*ft_itoa(int n)
{
	char	*s;
	int 	len;
	long	nbr;

	nbr = n;
	len = 1;
	s = NULL;
	while (nbr == nbr / 10)
		len++;
	s = ft_strnew(len + ft_isnegativ(n));
	if (s == NULL)
		return (NULL);
	if (n < 0 ? 1 : 0)
		s[0] = '-';
	*(s + len + ft_isnegativ(n)) = '\0';
	while (len > 0)
	{
		s[len + ft_isnegativ(n)] = ((ft_isnegativ(n)) ? - (n / 10) : n % 10 + '0');
		len--;
	}
	if (n < 0 ? 1 : 0)
		s[0] = '-';
	return (s);	
}
