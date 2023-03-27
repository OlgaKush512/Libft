/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:24:10 by okushnir          #+#    #+#             */
/*   Updated: 2021/05/20 13:24:12 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	in_charset(char letter, char charset)
{
	return (letter == charset);
}

static int	nbr_words(char const *str, char charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (*str)
	{
		if (*str && (in_charset(*str, charset)))
			str++;
		if (*str && (!(in_charset(*str, charset))))
		{
			words++;
			while (*str && (!(in_charset(*str, charset))))
				str++;
		}
	}
	return (words);
}

static char	*make_str(char const *str, char charset)
{
	int		i;
	char	*arr;

	i = 0;
	while ((str[i] && !(in_charset(str[i], charset))))
		i++;
	arr = (char *)malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return ((void *)0);
	i = 0;
	while (str[i] && !(in_charset(str[i], charset)))
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**my_arr;
	int		words;
	int		i;

	if (!s)
		return (malloc(0));
	i = 0;
	words = nbr_words(s, c);
	my_arr = (char **)malloc(sizeof(char *) * words + 1);
	if (my_arr == (void *)0)
		return ((void *)0);
	while (*s)
	{
		while (*s && (in_charset(*s, c)))
			s++;
		if (*s && !(in_charset(*s, c)))
		{
			my_arr[i] = make_str(s, c);
			i++;
			while (*s && !(in_charset(*s, c)))
				s++;
		}
	}
	my_arr[i] = (void *)0;
	return (my_arr);
}
