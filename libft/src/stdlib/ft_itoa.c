/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:09:58 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:11:54 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_itoa(int n)
{
	char	*ret;
	long	nc;
	int		len;
	int		neg;

	len = 1;
	nc = n;
	if ((neg = nc < 0))
		nc = -nc;
	while ((n /= 10))
		len++;
	if ((ret = ft_strnew(len + neg)))
	{
		if (neg)
			ret[0] = '-';
		while (len--)
		{
			ret[neg + len] = nc % 10 + '0';
			nc /= 10;
		}
	}
	return (ret);
}
