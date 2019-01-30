#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);
char	*ft_strtrim(char const *s);

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
char	*ft_strtrim(char const *s)
{
	char	*k;
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	if (!(k = (char*)malloc(i * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s || s[i] != '\0')
	{
		while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		{
			i++;
		}
		while (!(s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i] != '\0')
		{
			k[j] = s[i];
			j++;
			i++;
		}
	}
	return (i > 0 ? k : NULL);
}
int		main(void)
{
	char	*s = "Salut Romain\0Carette";
	char *s1;
	s1 = ft_strtrim(s);
	printf("%s", s1);
	return (0);
}
