/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:23:54 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/10 13:44:29 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*ptr;

	i = 0;
	while (i < n && ((char*)s)[i] != '\0')
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
		{
			ptr = &s;
			return (ptr + i);
		}
		i++;
	}
	return (NULL);
}
