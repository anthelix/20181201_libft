/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strqu0_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:46:52 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:46:54 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strequ(char const *s1, char const *s2)
{
  if (s1 == s2)
    return (1);
  return (0);
}

int main()
{
  char const *s1 = "asdflwerh";
  char const *s2 = "asdflwerh";
  
  printf("%d", ft_strequ(s1, s2));
  return (0);
}
