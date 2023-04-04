/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:42:48 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/27 19:54:32 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_diglen(int n)
{
	int	x;

	x = 0;
	if (n <= 0)
	{
		x++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		x++;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		y;
	long	nn;

	nn = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	y = ft_diglen(n);
	r = malloc(sizeof(char) * (ft_diglen(n) + 1));
	if (!r)
		return (0);
	while (0 <= y)
	{
		if (nn < 0)
			nn *= -1;
		else
		{
			r[--y] = (nn % 10) + 48;
			nn = nn / 10;
		}
	}
	r[ft_diglen(n)] = '\0';
	if (n < 0)
		r[0] = 45;
	return (r);
}
/*
#include <stdio.h>

int main (void)
{
	int	a;

	a = 123456;
//	itoa(a);
//	printf("|%zu|", ft_diglen(a));
	printf("|%s|\n", ft_itoa(a));
}*/
