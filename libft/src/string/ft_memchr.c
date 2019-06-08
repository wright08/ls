/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:10:21 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:39:47 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	const uint8_t	*sp;
	size_t			i;

	sp = s;
	i = 0;
	while (i < n)
	{
		if (sp[i] == (uint8_t)c)
			return ((void *)(sp + i));
		i++;
	}
	return (0);
}
