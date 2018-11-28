/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 20:35:38 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 20:35:51 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//if (strcmp(str1, "apple") == 0)
//  cout << "Equal" << endl;

char *ft_strnstr(const char *big, const char *little, size_t n)
{
  int i;
  int j;
  j = 0;
  i = 0;
  if (strcmp(little, "") == NULL)
    return ((char*)big);
  while (big[i] && i < n)
  {
    if (big[i] == little[j])
      j++;
    else
      j = 0;
    if (little[j] == '\0')
      return ((char*)big + (i - (j - 1)));
    i++;
  }
  return (0);
}


char *strnstr(const char *s, const char *find, size_t slen)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = strlen(find);
		do {
			do {
				if ((sc = *s++) == '\0' || slen-- < 1)
					return (NULL);
			} while (sc != c);
			if (len > slen)
				return (NULL);
		} while (strncmp(s, find, len) != 0);
		s--;
	}
	return ((char *)s);
}

int main()
{
	char *s1 = "oh no not the empty string !";
	char *s2 = "";
	size_t max = strlen(s1);
	char *i1 = strnstr(s1, s2, max);
	char *i2 = ft_strnstr(s1, s2, max);

  printf("strnstr: %c\n", *i1);
  printf("ft_strnstr: %c", *i2);
    // location = strnstr(haystack,needle,LIMIT);
    // if(location == NULL)
    //     printf("Can't find '%s' within %d characters of '%s'\n",
    //         needle,
    //         LIMIT,
    //         haystack);
    // else
    //     printf("Found '%s' within %d characters of '%s'\n",
    //         needle,
    //         LIMIT,
    //         haystack);

    return(0);
}
