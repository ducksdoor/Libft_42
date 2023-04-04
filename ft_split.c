/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 09:58:28 by lortega-          #+#    #+#             */
/*   Updated: 2023/03/30 13:29:53 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*first(char *str, char space)
{
	int		x;
	char	*result;
	char	*result1;

	x = 0;
	result = ft_strtrim(str, &space);
	while ((result[x] != space) && (result[x] != '\0'))
		x++;
	result1 = ft_substr(result, 0, x);
	free(result);
	return (result1);
}

static char	*next(char *str, char space)
{
	int		x;
	char	*result;
	char	*p;
	char	*result3;

	x = 0;
	result = ft_strtrim(str, &space);
	while (result[x] != space && result[x] != '\0')
		x++;
	p = result;
	result = ft_substr(result, x, ft_strlen(result));
	free(p);
	result3 = ft_strtrim(result, &space);
	free(result);
	free(str);
	return (result3);
}

static int	cont_w(char *str, char space)
{
	int	c;
	int	wd;

	c = 0;
	wd = 0;
	while (str[c] != '\0')
	{
		if (str[c] == space)
			c++;
		else if (str[c] != space)
		{
			wd++;
			while (str[c] != space && str[c] != '\0')
				c++;
		}
	}
	return (wd);
}

static void	ft_segurity(char **array, int x, char *temp)
{
	int	i;

	i = 0;
	while (i < x)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	int		wd;
	char	**array;
	int		x;
	char	*temp;

	if (!s)
		return (NULL);
	wd = cont_w((char *)s, c);
	array = ft_calloc((wd + 1), (sizeof(char *)));
	if (!array)
		return (NULL);
	s = ft_strdup(s);
	x = -1;
	while (++x < wd)
	{
		temp = first((char *)s, c);
		s = next((char *)s, c);
		array[x] = ft_strdup(temp);
		if (!array[x])
			ft_segurity(array, x, temp);
		free(temp);
	}
	free((void *)s);
	return (array);
}
/*
#include <stdio.h>

int main (void)
{
	char *a = "  esto  me da dolor de cabeza ... huhuh "; 
	char c = ' ';
	char	p; 
	int	x = 0;	
	char **r = ft_split("hhello!", ' ');
	p = cont_w(a, c);	
	while (r[x])
	{	
		printf("%s\n%p\n", r[x], r[x]);
		x++;
	}
		printf("%s\n%p\n", r[x], r[x]);
}*/
