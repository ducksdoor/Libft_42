/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:14:04 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/07 16:46:32 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*x;
	unsigned char		*z;

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
