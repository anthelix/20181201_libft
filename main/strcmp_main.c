/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:34:31 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 20:34:34 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// if Return value < 0 then it indicates str1 is less than str2.
// if Return value > 0 then it indicates str2 is less than str1.
// if Return value = 0 then it indicates str1 is equal to str2.

int ft_strcmp(const char *s1, const char *s2)
{
  size_t    i = 0;
  
  if (strlen(s1) - strlen(s2) != 0)
      return (strlen(s1) - strlen(s2));
  else
  {
    while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
		  i++;
		return (s1[i] - s2[i]);
  }
}

// int		ft_strcmp(const char *s1, const char *s2)
// {
// 	size_t		i;
// 	char	diff;

// 	i = 0;
// 	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
// 		i++;
// 	diff = (s1[i] - s2[i]);
// 	return (diff);
// }

// int		ft_strcmp(const char *s1, const char *s2)
// {
// 	size_t			i;
// 	unsigned char	*cpy_s1;
// 	unsigned char	*cpy_s2;

// 	i = 0;
// 	cpy_s1 = (unsigned char *)s1;
// 	cpy_s2 = (unsigned char *)s2;
// 	while (cpy_s1[i] == cpy_s2[i])
// 	{
// 		if (!cpy_s1[i] && !cpy_s2[i])
// 			return (0);
// 		i++;
// 	}
// 	return (cpy_s1[i] - cpy_s2[i]);
// }

#include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "AAAAAAAAAB";
	char *s2 = "AAAAAAAAAC";
	int i1 = ((strcmp(s1, s2) > 0) ? 1 : ((strcmp(s1, s2) < 0) ? -1 : 0));
	int i2 = ((ft_strcmp(s1, s2) > 0) ? 1 : ((ft_strcmp(s1, s2) < 0) ? -1 : 0));
	
	printf("strcmp: %d\n", i1);
	printf("ft_strcmp: %d\n", i2);
    // char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    // int result;

    // // comparing strings str1 and str2
    // result = strcmp(str1, str2);
    // printf("strcmp(str1, str2) = %d\n", result);

    // // comparing strings str1 and str3
    // result = ft_strcmp(str1, str3);
    // printf("strcmp(str1, str3) = %d\n", result);

    return 0;
}

// int main ()
// {
//   char str1[15];
//   char str2[15];
//   int ret;


//   strcpy(str1, "abcdef");
//   strcpy(str2, "ABCDEF");

//   ret = ft_strcmp(str1, str2);

//   if(ret < 0)
//   {
//       printf("str1 is less than str2");
//   }
//   else if(ret > 0) 
//   {
//       printf("str2 is less than str1");
//   }
//   else 
//   {
//       printf("str1 is equal to str2");
//   }
   
//   return(0);
// }
