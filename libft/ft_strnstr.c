/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 12:48:01 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/15 01:51:56 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	int		c;

	i = 0;
	c = 0;
	if (s2[0] == '\0')
		return (char*)(s1);
	while ((i < n) && (s1[i]))
	{
		j = i;
		c = 0;
		while ((s1[j] == s2[c]) && (j < n))
		{
			j++;
			c++;
			if (s2[c] == '\0')
				return (char*)(&s1[i]);
		}
		i++;
	}
	return (NULL);
}
