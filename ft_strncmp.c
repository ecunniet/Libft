/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:46:44 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/10 14:02:53 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i] && i < n
			&& s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
