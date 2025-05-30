/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:16:07 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/19 13:16:10 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compare_char(char object, char *try)
{
	int	x;

	x = 0;
	while (try[x])
	{
		if (object == try[x])
			return (1);
		x++;
	}
	return (-1);
}
