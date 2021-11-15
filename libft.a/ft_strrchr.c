/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:31:36 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/11 17:49:30 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;

	s = (char *)str;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == (char )c)
		{
			return (s + i);
		}
		i--;
	}
	return (0);
}
/*
int main()
{
	char str [] = "foufad";
	printf("%s\n", ft_strrchr(str, 'u'));
	printf("%s", strrchr(str, 'u'));
}*/
