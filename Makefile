# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/16 20:26:29 by fbouanan          #+#    #+#              #
#    Updated: 2021/11/16 23:33:28 by fbouanan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c ft_atoi.c \
	ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_substr.c ft_bzero.c ft_putnbr_fd.c \
	ft_strlcpy.c ft_tolower.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strlen.c \
	ft_toupper.c ft_isalnum.c ft_memcmp.c ft_split.c ft_strmapi.c \
	ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strncmp.c ft_isascii.c ft_memmove.c \
	ft_strdup.c ft_strnstr.c ft_isdigit.c ft_memset.c ft_striteri.c ft_strrchr.c\


NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

AR = ar rc

OBJS = ${SRCS:.c=.o}

%.o : %.c
	${CC} $(CFLAGS) -c $< -o $@  
	${AR} ${NAME} $@

all : $(NAME)

$(NAME) : ${OBJS}

clean :
	rm -f ${OBJS}
fclean : clean
	rm -f ${NAME}

re : fclean all 

.PHONY : re fclean clean all
