/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:24:56 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/04 16:28:39 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			x;
	unsigned char	*cptr1;
	unsigned char	*cptr2;

	x = 0;
	cptr1 = (unsigned char *)ptr1;
	cptr2 = (unsigned char *)ptr2;
	while (x < n)
	{
		if (cptr1[x] != cptr2[x])
			return (cptr1[x] - cptr2[x]);
		++x;
	}
	return (0);
}
