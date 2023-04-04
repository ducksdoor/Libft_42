/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 19:44:09 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/28 13:07:07 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{	
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>
int main (void)
{
	t_list 	*lst;
	lst = malloc (sizeof(t_list) * 2);
	t_list	*old_nodo;
	t_list	*new_nodo;
	old_nodo = ft_lstnew("world");
	new_nodo = ft_lstnew("hello");
	ft_lstadd_front(&lst, old_nodo);
	ft_lstadd_front(&lst,new_nodo);
	while (lst->next)
	{
		printf("%s", lst->content);
		lst = lst->next;
	}
}*/
