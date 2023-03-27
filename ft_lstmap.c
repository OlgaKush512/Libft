/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:33:18 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:33:20 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp_n;
	t_list	*cur;

	if (lst == (void *)0 || f == (void *)0)
		return ((void *)0);
	tmp = ft_lstnew(f(lst->content));
	if (tmp == (void *)0)
		return ((void *)0);
	cur = tmp;
	lst = lst->next;
	while (lst != (void *)0)
	{
		tmp_n = ft_lstnew(f(lst->content));
		if (tmp_n == (void *)0)
		{
			ft_lstclear(&tmp, del);
			return ((void *)0);
		}
		cur->next = tmp_n;
		cur = cur->next;
		lst = lst->next;
	}
	return (tmp);
}
