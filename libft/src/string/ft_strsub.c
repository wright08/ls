/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:47:24 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:45:12 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strsub(char *str, unsigned int start, size_t len)
{
	char	*ret;

	if ((ret = ft_strnew(len)))
		ft_memcpy(ret, str + start, len);
	return (ret);
}
