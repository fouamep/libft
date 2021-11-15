/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:12:00 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/05 18:37:39 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	t;

	i = 0;
	t = 0;
	while (src[t] != '\0')
		t++;
	if (n == 0)
		return (t);
	while (i < t && i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (t);
}
/*
int main() 
{ 
	char dest[] = "fouad"; 
	char src[] = "hdf"; 
	printf("%ld", ft_strlcpy(dest, src, 4)); 
}*/
