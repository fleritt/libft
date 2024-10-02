/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:20:05 by rfleritt          #+#    #+#             */
/*   Updated: 2024/09/30 13:38:23 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if ((set == NULL) || (s1 == NULL))
		return (NULL);
	i = 0;
	while ((s1[i] != '\0') && (ft_strchr(set, s1[i]) != NULL))
	{
		i++;
	}
	j = ft_strlen(s1);
	while ((j > i) && (ft_strchr(set, s1[j - 1]) != NULL))
	{
		j--;
	}
	ptr = ft_substr(s1, i, i - j);
	return (ptr);
}

/*int main ()
{
	char *str;
	char str2[] = "holh";

	str = ft_strtrim(str2, "holh");
	printf("%s", str);
	free(str);
	return (0);
}*/
