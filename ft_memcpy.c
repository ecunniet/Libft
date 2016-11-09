/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:32:55 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/06 17:42:00 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((char*)dst)[i] != '\0' && ((char*)src)[i] != '\0')
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (dst);
}
