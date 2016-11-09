/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:47:13 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/06 17:04:31 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char*)src)[i] != '\0' && ((char*)dst)[i] != '\0')
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return (dst + i + 1);
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (NULL);
}
