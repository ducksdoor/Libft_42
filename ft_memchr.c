/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:37:55 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/14 09:57:42 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;
	char	*cc;

	x = 0;
	cc = (char *)s;
	while (x < n)
	{
		if (cc[x] == (char)c)
			return (&cc[x]);
		++x;
	}
	if (x == n)
		return (NULL);
	return (NULL);
}
