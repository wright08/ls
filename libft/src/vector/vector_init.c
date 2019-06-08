/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <rwright@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:19:40 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 21:09:46 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"
#include <stdlib.h>

t_vector	*vector_init(t_vector *v, int capacity)
{
	v->size = 0;
	v->capacity = capacity;
	if (!(v->items = malloc(capacity * sizeof(size_t))))
		return (NULL);
	return (v);
}
