/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:14:46 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:40:24 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		((uint8_t *)dst)[n] = ((const uint8_t *)src)[n];
	return (dst);
}
