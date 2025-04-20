/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:15:02 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/13 13:25:57 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*x;
	unsigned char	*z;
	size_t			c;

	x = (unsigned char *)dst;
	z = (unsigned char *)src;
	c = 0;
	if ((x == z) || (len == 0))
		return (x);
	if (x > z)
	{
		while (len-- > 0)
			x[len] = z[len];
	}
	else
	{
		while (c < len)
		{
			x[c] = z[c];
			++c;
		}
	}
	return (x);
}
