/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:47:14 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/06 09:59:53 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		y;

	y = ft_strlen(s);
	while (0 <= y)
	{
		if (s[y] == (char)c)
		{
			return ((char *)&s[y]);
		}
		--y;
	}
	return (NULL);
}
