/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:32:57 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:33:05 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*arr;

	arr = lst;
	if (f != (void *)0 || arr != (void *)0)
	{
		while (arr != (void *)0)
		{
			f(arr->content);
			arr = arr->next;
		}
	}
}
