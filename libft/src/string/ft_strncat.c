/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 11:08:59 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:37:42 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char	*end;

	end = ft_memccpy(dst + ft_strlen(dst), src, '\0', n);
	if (end)
		*(--end) = '\0';
	return (dst);
}
