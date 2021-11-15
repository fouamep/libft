/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:14:46 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/15 17:35:59 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
		ft_putstr_fd(s, fd);
	write (fd, "\n", 1);
}
/*
int main()
{
	int fd = open("path", O_CREAT | O_RDWR, 777);
	ft_putendl_fd("fouad", fd);
	return (0);
}*/
