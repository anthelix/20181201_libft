/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:11:10 by schatagn          #+#    #+#             */
/*   Updated: 2018/11/23 19:40:51 by schatagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

//*** DEFINITION DES VARIABLES DE LIBFT.H

# define TRUE	1
# define FALSE	0

# define ISNULL(x)		if ((x) == NULL) return (NULL)

typedef unsigned int	t_count;

//*** FIN VARIABLES LIBFT.H


void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *s, int fd);

//***FONCTIONS PERSO
int		ft_islowercase(int c);
int		ft_isuppercase(int c);
int		ft_isblankspace(int c);


//***FONCTIONS LIBC
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
size_t 	ft_strlen(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t count);

char 	*ft_strcat(char *dest, const char *src);
char 	*ft_strncat(char *dest, const char *src, size_t n);
char 	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);




#endif
