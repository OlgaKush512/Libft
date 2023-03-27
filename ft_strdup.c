/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:11:11 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 15:11:13 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*mon_str;
	size_t		i;

	i = 0;
	mon_str = (void *)0;
	mon_str = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (mon_str != (void *)0)
	{
		while (i < ft_strlen(s1))
		{
			mon_str[i] = s1[i];
			i++;
		}
		mon_str[i] = '\0';
	}
	return (mon_str);
}
