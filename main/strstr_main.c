/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:13:06 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:13:07 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*s1c;
	char	*s2c;

	s1c = (char *)s1;
	s2c = (char *)s2;
	i = 0;
	j = 0;
	if (!s2c)
		return (s1c);
	while (s2c[j])
	{
		if (s1c[i] == s2c[j])
			return (&s2c[j]);
		i++;
		j++;
	}
	return (0);
}

int main()
{
	char *s1 = "FF";
	char *s2 = "see F your F return F now FF";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
  
  printf("%s\n", i1);
  printf("%s\n", i2);
  
  return (0);
}




//   const char haystack[20] = "TutorialsPoint";
//   const char needle[10] = "Point";
//   char *ret;

//   ret = ft_strstr(haystack, needle); //replace function to test

//   printf("The substring is: %s\n", ret);
   
//   return(0);
// }
