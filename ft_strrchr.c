/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:09:27 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 15:09:29 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (c > 255)
		c = c - 256;
	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + i);
	while (i--)
	{
		if (s[i] == c)
			return ((char *)s + i);
	}
	return ((void *)0);
}
