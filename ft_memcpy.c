/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfleritt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:26:55 by rfleritt          #+#    #+#             */
/*   Updated: 2024/09/23 18:17:28 by rfleritt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[y];
		y++;
		i++;
	}
	return (dest);
}

/*int main ()
{
    char str[10] = "holaa";
	char x[10];
    printf("%s\n", str);
    ft_memcpy(x,str,4);
    printf("%s",x);
    return (0);
}*/
