/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:25:02 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/13 17:33:48 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		ss1;
	int		ss2;
	char	*m;

	if (!s1 || !s2)
		return (NULL);
	ss1 = ft_strlen(s1);
	ss2 = ft_strlen(s2);
	m = malloc(sizeof(char) * (ss1 + ss2 + 1));
	if (!m)
		return (0);
	i = 0;
	while (i <= ss1)
	{
		m[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ss2)
		m[ss1++] = s2[i++];
	m[ss1] = '\0';
	return (m);
}
/*
int main ()
{
    char dest[] = "fouad";
    char src[] = "bouanane";
    printf("%s", ft_strjoin(dest, src));
}*/
