/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:33:31 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 20:33:34 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// if Return value < 0 then it indicates str1 is less than str2.
// if Return value > 0 then it indicates str2 is less than str1.
// if Return value = 0 then it indicates str1 is equal to str2.
int		ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int    i = 0;
  unsigned char *cs1 = s1;
  unsigned char *cs2 = s2;
  int diff;
	while ((cs1[i] || cs2[i]) && (cs1[i] == cs2[i]) && (i < n))
		i++;
	diff = (cs1[i] - cs2[i]);
  return (diff);

	
}



// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
//     int i;
    
//     i = 0;
//     while ((s1[i] || s2[i]) && (i < n))
//     {
//         if (s1[i] < s2[i])
//             return (-1);
//         if (s1[i] > s2[i])
//             return (1);
//         i++;
//     }
//     return (0);
// }


int main ()
{
	char *s1 = "\200";
	char *s2 = "\0";
	int i1 = ((strncmp(s1, s2, 1) > 0) ? 1 : ((strncmp(s1, s2, 1) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, 1) > 0) ? 1 : ((ft_strncmp(s1, s2, 1) < 0) ? -1 : 0));
	
	printf("strncmp: %d\n", i1);
	printf("ft_strncmp: %d\n", i2);
   return(0);
}
