/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:14:04 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/14 13:59:53 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*x;
	unsigned const char	*z;

	x = (unsigned char *)dst;
	z = (unsigned char *)src;
	i = 0;
	if (dst == src || n == 0)
		return (x);
	while (i < n)
	{
		x[i] = z[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s", ft_memcpy("cocoroto", "motorola", 2));
	return (0);
}*/
