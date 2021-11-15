# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 16:25:59 by fbouanan          #+#    #+#              #
#    Updated: 2021/11/15 18:28:21 by fbouanan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS    = ft_bzero.c\
        ft_calloc.c\
        ft_isalpha.c\
        ft_isdigit.c\
        ft_isascii.c\
        ft_isalnum.c\
        ft_isprint.c\
        ft_memcpy.c\
        ft_memmove.c\
        ft_memset.c\
        ft_memchr.c\
        ft_memcmp.c\
        ft_strlcat.c\
        ft_strlcpy.c\
        ft_strlen.c\
        ft_strchr.c\
        ft_strdup.c\
        ft_strncmp.c\
        ft_strnstr.c\
        ft_strrchr.c\
        ft_substr.c\
        ft_atoi.c\
        ft_toupper.c\
        ft_tolower.c\
        ft_strjoin.c\
        ft_strcat.c\

all        :
	gcc -Wall -Wextra -Werror libft.h -c ${SRCS}
	ar rc libft.a *.o
clean    :
	rm -f *.o
fclean    : clean
    rm -f libft.a
re        : fclean all
