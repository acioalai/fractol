/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 16:14:04 by acioalai          #+#    #+#             */
/*   Updated: 2016/01/19 07:54:54 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		dim;
	int		i;

	i = 0;
	dim = 0;
	while (s1[dim])
		dim++;
	str = (char*)malloc(sizeof(str) * (dim));
	while (i < dim)
	{
		str[i] = s1[i];
		i++;
	}
	str[dim] = '\0';
	return (str);
}
