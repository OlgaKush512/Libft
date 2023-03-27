/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:31:00 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:31:03 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*my_elem;

	my_elem = (void *)0;
	my_elem = (t_list *)malloc(sizeof(t_list));
	if (my_elem != (void *)0)
	{
		my_elem->content = content;
		my_elem->next = (void *)0;
	}
	return (my_elem);
}
