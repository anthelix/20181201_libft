/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr1_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:05:13 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 22:05:15 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
  while (str)
  {
    if (*str == c)
      return str;
    if (!*str)
      return NULL;
    str++;
  }
  return (0);
}

int	main(void)
{
  int c = '\0';
	printf("%s\n", ft_strchr("bonbons", c));
	printf("%s\n", strchr("bonbons", c));
	return (0);
}
