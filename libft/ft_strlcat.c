/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/14 17:53:58 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/14 18:58:43 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t isrc;
	size_t idst;
	size_t idx;

	isrc = ft_strlen(src);
	idst = ft_strlen(dst);
	idx = 0;
	if (size < idst)
		return (size + isrc);
	if (size == idst)
		return (isrc + idst);
	while (idx < (size - idst - 1))
	{
		if (idx <= isrc)
			dst[idst + idx] = src[idx];
		idx++;
	}
	dst[idst + idx] = '\0';
	return (isrc + idst);
}
