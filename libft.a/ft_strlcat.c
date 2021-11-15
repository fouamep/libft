/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:24:07 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/12 22:41:14 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	c;
	size_t	i;

	if (n <= ft_strlen(dst))
		return (n + ft_strlen(src));
	c = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && c + 1 < n)
	{
		dst[c] = src[i];
		c++;
		i++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
/*
int main()
{
	char dest[] = "fouad";
	char src[] = "bouanane";
	printf("%ld\n", ft_strlcat(dest, src, 0));
	printf("%ld\n", strlcat(dest, src, 0));
	printf("%s", dest);
}*/
