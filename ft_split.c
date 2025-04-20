/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:58:28 by lortega-          #+#    #+#             */
/*   Updated: 2023/04/06 13:06:57 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			j++;
			while ((str[i] != '\0') && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (j);
}

static int	ft_word_len(char const *str, char c, int index)
{
	int	i;

	i = 0;
	while (str[index + i] != c && str[index + i] != '\0')
		i++;
	return (i);
}

static char	**ft_free_split(char **split, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	split = (char **)malloc (sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!(split))
		return (0);
	while (j < ft_word_count(s, c))
	{
		while (s[i] == c)
			i++;
		split[j] = ft_substr(s, i, ft_word_len(s, c, i));
		if (!(split[j]))
			return (ft_free_split(split, j));
		j++;
		i += ft_word_len(s, c, i);
	}
	split[j] = 0;
	return (split);
}
