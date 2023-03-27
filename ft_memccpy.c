/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:06:33 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 15:06:36 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*p_dst;
	char	*p_src;

	i = 0;
	p_dst = (char *)dst;
	p_src = (char *)src;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		if (((unsigned char)p_src[i] == (unsigned char)c))
			return ((char *)dst + i + 1);
		i++;
	}
	return ((void *)0);
}
