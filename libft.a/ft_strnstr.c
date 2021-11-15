/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:37:55 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/12 18:18:53 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == 0)
		return ((char *) big);
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		while (little[i] && (little[j] == big[i + j]) && i + j < n)
		{
			if (little [j + 1] == '\0')
			{
				return ((char *) big + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char big[] = "";
	char lit[] = "";
	printf("%s\n", ft_strnstr(big, lit, 0));
	printf("%s", strnstr(big, lit, 0));
}*/
