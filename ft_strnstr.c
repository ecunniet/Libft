/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:40:24 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/10 15:01:55 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	tab[3];
	void	*ptr;

	ptr = &big;
	tab[0] = 0;
	tab[1] = ft_strlen(little);
	tab[2] = 0;
	if (tab[1] == 0)
		return (ptr);
	if (tab[1] < len)
		len = tab[1];
	while (big[tab[2]] != '\0')
	{
		if (big[tab[2]] == little[tab[0]])
		{
			while (big[tab[2] + tab[0]] == little[tab[0]] && tab[0] < len)
				tab[0]++;
			if (tab[0] == len)
				return (ptr + tab[2]);
			else
				tab[0] = 0;
		}
		tab[2]++;
	}
	return (NULL);
}
