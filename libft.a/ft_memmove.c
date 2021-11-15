/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:22:04 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/12 16:26:33 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;	
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
		return (dest);
	}	
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main()
{
	char *src  = strdup("abcdef");
	//char dest [] = "";
	printf("%s\n", memmove(src + 2, src, 4));
}*/
