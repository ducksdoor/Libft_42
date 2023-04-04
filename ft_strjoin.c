/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:39:41 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/30 14:47:02 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len1;
	int		len2;

	if (s1 == 0 || s2 == 0)
		return (0);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, len1 + 1);
	ft_strlcat(s3, s2, (len1 + len2 + 1));
	return (s3);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%s", ft_strjoin("lorem ipsum", "dolor sit amet"));
}*/
