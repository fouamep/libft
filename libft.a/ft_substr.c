/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:50:22 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/13 21:12:13 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	new_s = (char *)malloc (len + 1);
	if (!s || !new_s)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		new_s[j] = s[i];
		j++;
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}
/*
int main()
{
	char src[] = "adam";
	unsigned int  m = 2;
	unsigned int  n = 5;
	printf("%s", ft_substr(src, m, n));
	return 0;
}*/
