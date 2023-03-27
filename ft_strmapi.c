/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:24:41 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:24:44 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*arr;

	if (!s || f == NULL)
		return ((char *)malloc(0));
	i = 0;
	size = ft_strlen(s);
	arr = (void *)0;
	arr = (char *)malloc(sizeof(char) * size + 1);
	if (arr == (void *)0)
		return ((void *)0);
	while (i < size)
	{
		arr[i] = (*f)(i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
