/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthelix <anthelix@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 21:11:36 by anthelix          #+#    #+#             */
/*   Updated: 2018/11/28 21:22:21 by anthelix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	const char	*src2;
	char		*dest2;

	i = 0;
	src2 = src;
	dest2 = dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		if (dest2[i] == (char)c)
		  // ft_putchar(src2);
			return ((void *)src);
		i++;
	}
	return (0);
}

//TEST ONE TEST ONE TEST ONE
// char *msg = "HELLO WORLD";

// int main() {

//     char buffer[80];
//     memset( buffer, '\0', 11 );
//     ft_memccpy( buffer, msg, 'L', 15 );
//     printf( "%s\n", buffer );
    
//     return (0);
// }


char string1[60] = "Taj Mahal is a historic monument in India.";

int main( void ) {

  char buffer[61];
  char *pdest;
  printf( "Function: _memccpy 42 characters or to character 'c'\n" );
  printf( "Source: %s\n", string1 );
  pdest = ft_memccpy( buffer, string1, 'c', 42);
  *pdest = '\0';
  printf( "Result: %s\n", buffer );
  printf( "Length: %d characters\n", strlen( buffer ) );
}
