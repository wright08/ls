/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 20:25:23 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 21:18:45 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int		ft_atoi(const char *str)
{
	long	n;
	int		neg;

	n = 0;
	while (ft_isspace(*str))
		str++;
	if ((neg = *str == '-') || *str == '+')
		str++;
	while (ft_isdigit(*str))
		n = n * 10 + *str++ - '0';
	return ((int)(neg ? -n : n));
}
