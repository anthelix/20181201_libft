/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnqu0_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:16:33 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:16:51 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (s1 == s2)
			return (1);
		i++;
	}
	return (0);
}

int main()
{
  char const *s1 = "asdflwerh";
  char const *s2 = "asdflerh";
  
  printf("%d", ft_strnequ(s1, s2, 3));
  return (0);
}
