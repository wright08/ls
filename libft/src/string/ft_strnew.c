/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:06:48 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:43:31 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char *str;

	if ((str = ft_memalloc(size + 1)))
		return (str);
	return (NULL);
}
