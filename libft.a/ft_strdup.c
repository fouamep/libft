/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 21:11:04 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/13 21:06:25 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*n;
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
		i++;
	n = (char *) malloc (i + 1);
	if (!n)
		return (0);
	n[i] = 0;
	while (i >= 0)
	{
		n[i] = str[i];
		i--;
	}
	return (n);
}
/*
int main()
{
	char x[] = "fouad";
	printf("%s", ft_strdup(x));
}*/
