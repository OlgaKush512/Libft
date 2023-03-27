/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:32:11 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:32:13 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*alst);
	if (alst == (void *)0 || new == (void *)0)
		return ;
	if (*alst == (void *)0)
	{
		*alst = new;
		return ;
	}
	if (new != (void *)0)
		last->next = new;
}
