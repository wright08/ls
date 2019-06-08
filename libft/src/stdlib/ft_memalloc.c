/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:00:46 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:13:03 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ret;

	if ((ret = malloc(size)))
		ft_memset(ret, 0, size);
	return (ret);
}
