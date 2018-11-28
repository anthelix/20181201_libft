/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:29:44 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 20:30:02 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_isspace(int c)
{
	if (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ')
	{
		return (1);
	}
	return (0);
}

int		ft_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	if (c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int		sign;
	int 	number;
	char	*cstr;

	number = 0;
	cstr = (char *)str;
	while (ft_whitespace(*cstr))
		cstr++;
	sign = (*cstr == '-') ? -1 : 1;
	cstr = (*cstr == '+' || *cstr == '-') ? cstr + 1 : cstr;
	while (*cstr >= '0' && *cstr <= '9')
	{
		number = number * 10 + *cstr - 48;
		cstr++;
	}
	number *= sign;
  return (number);
}


int main()
{
	char n[40] = "-99999999999999999999999999";
	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	
	printf("atoi: %d\n", i1);
	printf("ft_atoi: %d\n", i2);
	return (0);
}
