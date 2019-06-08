/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <rwright@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:02:28 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:03:03 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_H
# define FT_VECTOR_H

# include <stddef.h>

struct		s_vector
{
	int		capacity;
	int		size;
	void	**items;
};
typedef struct s_vector	t_vector;

void		*vector_add(t_vector *v, void *item);
void		vector_delete(t_vector *v, int index);
void		vector_free(t_vector *v);
void		*vector_get(t_vector *v, int index);
t_vector	*vector_new(int capacity);
t_vector	*vector_init(t_vector *v, int capacity);
t_vector	*vector_resize(t_vector *v, int capacity);
void		vector_set(t_vector *v, int index, void *item);

#endif
