/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:23:40 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/14 12:53:11 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int b)
{
	if (ft_isalpha(b) == 1)
		return (1);
	else
	{	
		if (ft_isdigit(b) == 1)
			return (1);
		else
			return (0);
	}
}
/*
#include <stdio.h>

int main (void)
{
	printf("%d",ft_isalnum(144));
}
*/
