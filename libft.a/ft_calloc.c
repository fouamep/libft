/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:47:46 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/05 19:30:16 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*p;

	p = malloc(n * size);
	if (!p)
		return (NULL);
	ft_bzero(p, (n * size));
	return (p);
}
/*
int main ()
{
	char *a = ft_calloc(5, 3);
	int i = 0;
	while (i < 5 * 3)
	{
		printf("%d", a[i]);
		i++;	
	}
}*/
