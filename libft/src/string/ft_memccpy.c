/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:20:43 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:36:27 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdint.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((uint8_t *)src)[i] != (uint8_t)c)
		i++;
	ft_memcpy(dst, src, (i == n ? i : i + 1));
	if (i == n)
		return (NULL);
	return (dst + i + 1);
}
