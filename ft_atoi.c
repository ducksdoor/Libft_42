/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:47:08 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/16 15:49:51 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	spaces(const char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		++i;
	while ((str[i] == 43) || (str[i] == 45))
	{
		if (str[i] == 45)
			count = -1;
		++i;
		if ((str[i] == 43) || (str[i] == 45))
			return (0);
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = spaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		++i;
	}
	result *= sign;
	return (result);
}
/*
#include <stdio.h>

int main (void)
{
	printf("%d\n",ft_atoi(" -   ++3445rrg33"));
	printf("%d\n",atoi(" -   ++3445rrg33"));
}*/
