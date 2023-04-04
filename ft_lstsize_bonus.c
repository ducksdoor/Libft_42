/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:22:13 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/30 13:26:06 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	x;

	x = 0;
	while (lst)
	{
		x++;
		lst = lst->next;
	}
	return (x);
}
/*
#include <stdio.h>
int main (void)
{
	t_list  *old_nodo;
	t_list  *new_nodo;
	old_nodo = ft_lstnew("world");
	new_nodo = ft_lstnew("hello");
	ft_lstadd_front(&old_nodo, new_nodo);
	printf("%d", ft_lstsize(new_nodo));
}*/
