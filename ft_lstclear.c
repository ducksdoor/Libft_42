/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 19:58:38 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/30 13:10:51 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*more;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		more = temp->next;
		del (temp->content);
		free(temp);
		temp = more;
	}
	free(temp);
	*lst = NULL;
}
