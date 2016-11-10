/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:14:54 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/10 13:53:07 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		tab[3];
	void	*ptr;

	ptr = &big;
	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	while (little[tab[0]] != '\0')
		tab[0]++;
	if (tab[0] == 0)
		return (ptr);
	while (big[tab[1]] != '\0')
	{
		if (big[tab[1]] == little[tab[2]])
		{
			while (big[tab[1] + tab[2]] == little[tab[2]] && tab[2] == tab[0])
				tab[2]++;
			if (tab[2] == tab[0])
				return (ptr + tab[1]);
			else
				tab[2] = 0;
		}
		tab[1]++;
	}
	return (NULL);
}
