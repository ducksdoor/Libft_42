/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 14:54:18 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/30 13:20:46 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
				lst = lst->next;
		return (lst);
	}
	return (NULL);
}

/*
#include <stdio.h>
int main (void)
{
	t_list 	*lst;
	lst = malloc (sizeof(t_list) * 2);
	t_list	*old_nodo;
	//t_list	*new_nodo;;
	old_nodo = ft_lstnew("patata");
	old_nodo->next = ft_lstnew("world");
	lst = old_nodo;
	//printf("%s\n", lst->content);
	//printf("%s\n", old_nodo->content);
	//new_nodo = ft_lstnew("hello");
	//ft_lstadd_front(&lst, old_nodo);
	//ft_lstadd_front(&lst,new_nodo);
	printf("%s", ft_lstlast(lst)->content);
}*/
