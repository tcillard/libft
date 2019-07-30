/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:55:48 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/17 17:11:41 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*cpy;
	int		i1;
	int		i2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i1 = 0;
	i2 = 0;
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(cpy = malloc(sizeof(char*) * len + 1)))
		return (NULL);
	while (s1[i1])
	{
		cpy[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		cpy[i1 + i2] = s2[i2];
		i2++;
	}
	cpy[i1 + i2] = '\0';
	return (cpy);
}
