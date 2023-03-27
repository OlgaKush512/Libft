/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:32:38 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:32:41 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_c;
	t_list	*tmp_n;

	tmp_c = *lst;
	while (tmp_c != (void *)0)
	{
		tmp_n = tmp_c->next;
		ft_lstdelone(tmp_c, del);
		tmp_c = tmp_n;
	}
	*lst = (void *)0;
}
