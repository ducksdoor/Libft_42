/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:28:22 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/08 19:44:18 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int b)
{
	if (b >= 0 && b <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int main (void)
{
	printf("%d", ft_isascii(160));
}*/
