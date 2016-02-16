/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acioalai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 15:42:30 by acioalai          #+#    #+#             */
/*   Updated: 2015/11/21 08:51:05 by acioalai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int num;
	int nul;

	num = 0;
	nul = 1;
	while (*str == '\r' || *str == '\n' || *str == '\t' || *str == '\f'
			|| *str == ' ' || *str == '\v')
		str++;
	if (*str == '-')
	{
		str++;
		nul = -1;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	return (num * nul);
}
