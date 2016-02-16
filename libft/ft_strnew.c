/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/09 07:31:12 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/15 03:50:50 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if ((!(str = (char *)malloc(sizeof(char) * size))))
		return (NULL);
	str[size + 1] = '\0';
	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	return ((void *)str);
}
