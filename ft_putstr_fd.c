/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:15:32 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/27 13:36:45 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	x;

	x = 0;
	if (s)
	{
		while (s[x] != '\0')
		{
			write (fd, &s[x], 1);
			x++;
		}
	}
}
/*
int main(void)
{
	ft_putstr_fd("catalan", 1);
}*/
