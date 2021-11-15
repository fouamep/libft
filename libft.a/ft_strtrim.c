/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:50:19 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/13 21:10:07 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (0);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_check(s1[start], set) == 1)
		start++;
	while (end > start && ft_check(s1[end - 1], set) == 1)
		end--;
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (0);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
   	char str[] = "";
	char set[] = "fo";
    printf("%s", ft_strtrim(str, set));
}*/
