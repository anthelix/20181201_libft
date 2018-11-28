#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	*ft_memalloc(size_t size)
{
	char	*t;

	if ((t = malloc(size)) == NULL)
		return (NULL);
	while (size > 0)
		t = malloc(size--);
	return (t);
}

char	*ft_strnew(size_t size)
{
	char *str;

	str = ft_memalloc(size);
	ft_putchar('\0');
	return (str);
}


char  *ft_strtrim(char const *s)
{
  int i = 0;
  int j = 0;
  char *new = NULL;
  new = ft_strnew(sizeof(s));
  while (s[i])
  {
    if (s[i] != '\n')
    {
      new[j] = s[i];
      j++;
    }
   i++;
  }
  return (new);
}


int main()
{
    char string[] = "Hello wor\nld";
    printf("result: %s", ft_strtrim(string));
    return (0);
}
