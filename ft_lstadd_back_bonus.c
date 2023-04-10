/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:53:55 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/04 19:20:06 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!new)
		return ;
	temp = ft_lstlast(*lst);
	if (temp)
		temp->next = new;
	else
		*lst = new;
}

/*
#include <stdio.h>

int main (void)
{
	t_list 	*lst;
	lst = malloc (sizeof(t_list) * 2);
	t_list	*old_nodo;
	t_list	*new_nodo;;
	old_nodo = ft_lstnew("patata");
	old_nodo->next = ft_lstnew("world");
	//printf("%s\n", lst->content);
	//printf("%s\n", old_nodo->content);
	new_nodo = ft_lstnew("hello");
	ft_lstadd_front(&lst, old_nodo);
	ft_lstadd_front(&lst,new_nodo);
	printf("%s", ft_lstadd_back(&lst, new_nodo));
}*/
