/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:29:19 by rfleritt          #+#    #+#             */
/*   Updated: 2024/10/02 18:02:36 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}

static size_t	ft_cd(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) || (s[i + 1] == '\0' && s[i] != c))
			j++;
		i++;
	}
	return (j);
}

static char	**ft_malloc_mem(char const *s, char c)
{
	char	**split;

	split = (char **)malloc((ft_cd(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (split);
}

static char	**ft_split_malloc(char const *s, char c, char **split)
{
	size_t	st;
	size_t	len;
	size_t	i;
	char	*substr;

	i = 0;
	st = 0;
	while (s[st])
	{
		if (s[st] != c)
		{
			len = 0;
			while (s[st + len] && s[st + len] != c)
				len++;
			if (ft_substr(s, st, len))
				return (ft_free(split));
			st += len;
		}
		else
			st++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = ft_malloc_mem(s, c);
	if (!split)
		return (NULL);
	return (ft_split_malloc(s, c, split));
}

int main()
{
	char **result;
	size_t i;
	char str[] = "hola buenas tardes    hola buenas tardes";
	
	i = 0;
	result = ft_split(str, ' ');
	while (result[i])
	{
		printf("%zu %s\n", i, result[i]);
		i++;
	}
	return (0);
}
