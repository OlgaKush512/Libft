/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:10:15 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 15:10:18 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char			*p_dst;
	const char		*p_src;
	unsigned int	n;
	unsigned int	dlen;

	p_dst = dst;
	p_src = src;
	n = dstsize;
	while (n-- != 0 && *p_dst != '\0')
		p_dst++;
	dlen = p_dst - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(p_src));
	while (*p_src)
	{
		if (n != 1)
		{
			*p_dst++ = *p_src;
			n--;
		}
		p_src++;
	}
	*p_dst = '\0';
	return (dlen + (p_src - src));
}
