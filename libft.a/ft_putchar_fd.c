/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 11:38:53 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/15 13:52:55 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int main()
{
	int fd = open("/Users/fbouanan/Desktop/hello.txt", O_CREAT | O_WRONLY, 777);
	ft_putchar_fd('v', fd);
	return 0;
}*/
