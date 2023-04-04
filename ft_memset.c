/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:25:23 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/08 19:33:53 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t			i;
	unsigned char	*y;

	y = (unsigned char *)ptr;
	i = 0;
	while (i < len)
	{
		y[i] = c;
		i++;
	}
	return (y);
}
/*
#include <stdio.h>

int main (void)
{
	char a[] = "wewewewewewe";

	printf("%s", ft_memset( a, '%', 3)); 
}*/
