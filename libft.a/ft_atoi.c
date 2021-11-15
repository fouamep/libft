/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:50:26 by fbouanan          #+#    #+#             */
/*   Updated: 2021/11/14 15:03:04 by fbouanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(size_t i)
{
	if (i == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t				k;
	size_t				i;
	int					sin;
	unsigned long long	n;

	i = 0;
	n = 0;
	sin = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
	{
		sin = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	k = i;
	while (str[i] >= '0' && str[i] <= '9')
		n = n * 10 + (str[i++] - 48);
	k = i - k;
	if (k > 19 || n > 9223372036854775807)
		return (check(sin));
	n = n * sin;
	return ((int)n);
}
/*
int main ()
{
	char x[] = "2147483680";
	printf("%d\n", ft_atoi(x));
	printf("%d", atoi(x));
}*/
