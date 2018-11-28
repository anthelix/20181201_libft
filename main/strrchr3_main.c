/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr3_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:04:31 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 22:04:32 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
  while (ft_strlen(str) >= 0)
  {
    if (*str == c)
      return str;
    if (!*str)
      return NULL;
    str--;
  }
  return (0);
}

int	main(void)
{
  int c = 'z';
	printf("%s\n", ft_strchr("bonbons", c));
	printf("%s\n", strchr("bonbons", c));
	return (0);
}
