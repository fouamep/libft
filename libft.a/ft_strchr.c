/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:47:44 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/11 17:31:11 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return (s);
	return (0);
}
/*
int main()
{
	char str [] = "foufad";
	printf("%s\n", strchr(str, 'u'));
	printf("%s\n", ft_strchr(str, 'u'));
	printf("%s", strrchr(str, 'f'));
}*/
