/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:25:25 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:36:52 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdint.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	void *end;

	if (dst == src || !n)
		return (dst);
	else if (dst > src)
		return (ft_memcpy(dst, src, n));
	end = dst + n;
	while (dst != end)
		*((uint8_t *)dst++) = *((const uint8_t *)src++);
	return (dst - n);
}
