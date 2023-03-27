/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:10:58 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 15:11:01 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*arr;

	arr = malloc(count * size);
	if (arr != (void *)0)
		ft_bzero(arr, (count * size));
	else
		return ((void *)0);
	return ((void *)arr);
}
