/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:07:26 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/17 17:23:16 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * len);
	while (i < len)
	{
		str[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char*)dst)[i] = str[i];
		i++;
	}
	return (dst);
}
