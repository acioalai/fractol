/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 16:02:10 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/15 05:23:34 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (dst && src)
	{
		i = 0;
		ft_memset(dst, '\0', n);
		while ((src[i] != '\0') && (i < n))
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
