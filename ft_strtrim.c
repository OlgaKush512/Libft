/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:23:58 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:24:00 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		start;
	int		end;
	int		len;

	if (!s1)
		return (malloc(0));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	if (len < 0)
		len = 0;
	p = (char *)malloc(sizeof(*p) * (len + 1));
	if (!p)
		return (malloc(0));
	while (s1[start] && start <= end)
		*p++ = s1[start++];
	*p = '\0';
	return (p - len);
}
