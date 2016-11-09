/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:14:54 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/09 17:36:14 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;
	int z;

	z = 0;
	i = 0;
	j = 0;
	while (little[i] != '\0')
		i++;
	if (i == 0)
		return (big);
	while (big[j] != '\0')
	{
		if (big[j] == little[z])
		{
			while (big[j + z] == little[z] && z == i)
				z++;
			if (z == i)
				return (big + j);
			else
				z = 0;
		}
		j++;
	}
	return (NULL);
}
