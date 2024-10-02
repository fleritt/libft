/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:21:52 by rfleritt          #+#    #+#             */
/*   Updated: 2024/09/26 10:11:53 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i - j]);
			i++;
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int main() {
  printf("%s", ft_strnstr("hola como estas", "como", 15));
	 printf("%s", strnstr("hola como estas", "como", 15));
  return 0;
}*/
