# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schatagn <schatagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 14:15:07 by schatagn          #+#    #+#              #
#    Updated: 2018/11/23 19:15:42 by schatagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CFLAGS	=	-Werror -Wall -Wextra
HEADER	= 	libft.h
SRC		=	./ft_putchar.c ./ft_putnbr.c ./ft_putstr.c ./ft_putendl.c \
	./ft_putchar_fd.c ./ft_putendl_fd.c ./ft_putnbr_fd.c ./ft_putstr_fd.c\
	./ft_islowercase.c ./ft_isuppercase.c ./ft_isblankspace.c\
	./ft_toupper.c ./ft_tolower.c ./ft_isprint.c ./ft_isdigit.c\
	./ft_isascii.c ./ft_isalnum.c ./ft_isalpha.c ./ft_strlen.c \
	./ft_strlcat.c ./ft_strncat.c ./ft_strcat.c\
	./ft_strcpy.c ./ft_strncpy.c\
	./ft_strchr.c ./ft_strrchr.c\
	./ft_strstr.c 


OBJS	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) -o $@ -c $< -I $(HEADER)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
