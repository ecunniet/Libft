/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:01:24 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/10 13:44:59 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	void	*ptr;

	j = 0;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (j <= i)
	{
		if (s[j] == ((char)c))
		{
			ptr = &s;
			return (ptr + j);
		}
		j++;
	}
	return (NULL);
}
