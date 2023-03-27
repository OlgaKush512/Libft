/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:31:56 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:31:59 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;
	t_list	*res;

	p = lst;
	res = NULL;
	while (p)
	{
		if (p->next == NULL)
			res = p;
		p = p->next;
	}
	return (res);
}
