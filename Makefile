# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 14:15:07 by schatagn          #+#    #+#              #
#    Updated: 2018/12/05 10:37:35 by schatagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
HEADER	= 	./includes
CFLAGS	=	-I$(HEADER) -Werror -Wall -Wextra
SRC	=	./ft_atoi.c ./ft_bzero.c ./ft_isalnum.c ./ft_isalpha.c\
		./ft_isascii.c ./ft_isblankspace.c ./ft_isdigit.c\
		./ft_islowercase.c ./ft_isprint.c ./ft_isuppercase.c\
		./ft_itoa.c ./ft_memalloc.c ./ft_memccpy.c ./ft_memchr.c\
		./ft_memcmp.c ./ft_memcpy.c ./ft_memdel.c ./ft_memmove.c\
		./ft_memset.c ./ft_putchar.c ./ft_putchar_fd.c ./ft_putendl.c\
		./ft_putendl_fd.c ./ft_putnbr.c ./ft_putnbr_fd.c ./ft_putstr.c\
		./ft_putstr_fd.c ./ft_strcat.c ./ft_strchr.c ./ft_strclr.c\
		./ft_strcmp.c ./ft_strcpy.c ./ft_strdel.c ./ft_strdup.c\
		./ft_strequ.c ./ft_striter.c ./ft_striteri.c ./ft_strjoin.c\
		./ft_strlcat.c ./ft_strlen.c ./ft_strmap.c ./ft_strmapi.c\
		./ft_strncat.c ./ft_strncmp.c ./ft_strncpy.c ./ft_strnequ.c\
		./ft_strnew.c ./ft_strnstr.c ./ft_strrchr.c ./ft_strsplit.c\
		./ft_strstr.c ./ft_strsub.c ./ft_strtrim.c ./ft_tolower.c\
		./ft_toupper.c ./ft_nrvf.c

OBJS	=	$(SRC:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $< -I $(HEADER)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
