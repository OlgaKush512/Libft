/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:09:12 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 15:09:15 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*r;

	if (c > 255)
		c = c - 256;
	r = s;
	while (*r)
	{
		if (*r == c)
			return ((char *)r);
		r++;
	}
	if (c == '\0' && !(*r))
		return ((char *)r);
	return ((void *)0);
}
