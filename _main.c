#include <stdio.h>
#include "libft.h"

int		main(void)
{
  char		*lol;

  lol = ft_strdup("LOL");
  ft_putendl(lol);
  ft_memdel(&lol);
  return (0);
}
