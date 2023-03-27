/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:23:20 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:23:22 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*arr;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	i = 0;
	arr = (char *)malloc(sizeof(char) * len + 1);
	if ((s + start) >= (s + ft_strlen(s)))
	{
		arr[0] = 0;
		return (arr);
	}
	if (arr != (void *)0)
	{
		while (i < len)
			arr[i++] = s[start++];
		arr[i] = '\0';
	}
	else
		return ((void *)0);
	return (arr);
}
