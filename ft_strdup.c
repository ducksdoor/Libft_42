/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:19:17 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/16 09:10:34 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		x;
	int		y;
	char	*des;

	x = ft_strlen(src);
	y = 0;
	des = (char *)malloc(sizeof(char) * (x + 1));
	if (des == NULL)
		return (0);
	while (src[y] != '\0')
	{
		des[y] = src[y];
		++y;
	}
	des[y] = '\0';
	return (des);
}
/*
#include <stdio.h>
int main(void)
{
	char	pepito[]="pasa_mucho_tiempo_en_42";

//	ft_strdup(pepito);
	printf("%s", ft_strdup("pasa mucho tiempo en 42"));
}
*/
