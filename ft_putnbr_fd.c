/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:02:12 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/21 17:13:35 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char a;

	if (!n)
		return ;
	if (n / 10)
		ft_putnbr_fd(n / 10, fd);
	else if (n < 0)
	{
		a = '-';
		write(fd, &a, 1);
	}
	a = (n % 10 * (n < 0 ? -1 : 1) + '0');
	write(fd, &a, 1);
}
