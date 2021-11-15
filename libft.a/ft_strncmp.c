/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:16:31 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/05 18:54:48 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (!(str1[i] == str2[i] && str1[i] != 0 && str2[i] != 0))
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main ()
{
	char str1[] = "";
	char str2[] = "";
	printf("%d", ft_strncmp(str1, str2, 6));
}*/
