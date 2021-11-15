/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:01:07 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/12 17:50:32 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	character;
	size_t			i;

	p = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*p == character)
		{
			return (p);
		}
		i++;
		p++;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "fouad";
	printf("%s", ft_memchr(str, 'u', 2));
}*/
