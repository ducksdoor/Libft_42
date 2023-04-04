/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:56:18 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/24 18:41:03 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	char	*r;
	int		slen;

	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	r = malloc(sizeof(char) * slen + 1);
	if (!r)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		r[x] = f(x, s[x]);
		x++;
	}
	r[x] = '\0';
	return (r);
}
/*
#include <stdio.h>
#include <string.h>

char ft_toupper4(unsigned int s, char c)
{
	if (s >= 0)
	{
		if (c >= 'a' && c <= 'z')
			c = c - 32;
	}
	return (c);
}



int main(void)
{
	char	s[] = "castania pilonga";
	char	*r;
	char	x;

	x = 0;
	r = ft_strmapi(s, ft_toupper4);
	printf("%s", r);
	return (0);
}*/
