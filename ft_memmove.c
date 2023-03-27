/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:06:47 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 15:06:49 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	if (!dst && !src)
		return ((void *)0);
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_src < p_dst)
		while (len--)
			p_dst[len] = p_src[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
