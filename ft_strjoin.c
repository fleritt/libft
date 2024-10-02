/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 12:21:52 by rfleritt          #+#    #+#             */
/*   Updated: 2024/09/28 13:17:34 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	ns;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	if (i > SIZE_MAX - 1)
		return (NULL);
	ns = i + j;
	ptr = malloc(ns + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, i);
	ft_strlcat(ptr, s2, ns);
	return (ptr);
}

/*int main ()
{
	char s1[] = "hola";
	char s2[] = " mundo";
	char *sc = ft_strjoin(s1, s2);

	printf("%s", sc);
	free(sc);
	return (0);
}*/
