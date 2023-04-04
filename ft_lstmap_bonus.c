/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 12:06:25 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/30 13:21:54 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*r;
	void	*rr;

	if (!lst || !f || !del)
		return (NULL);
	r = NULL;
	while (lst)
	{
		rr = f(lst->content);
		temp = ft_lstnew(rr);
		if (!temp)
		{
			ft_lstclear(&r, del);
			del(rr);
			return (NULL);
		}
		ft_lstadd_back(&r, temp);
		lst = lst->next;
	}
	return (r);
}
