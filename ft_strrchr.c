/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:08:32 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/10 13:46:51 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	void	*ptr;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i)
	{
		if (s[i] == ((char)c))
		{
			ptr = &s;
			return (ptr + i);
		}
		i--;
	}
	return (NULL);
}
