/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 22:25:20 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:41:08 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	const uint8_t	*s1u;
	const uint8_t	*s2u;
	size_t			i;

	s1u = (const uint8_t *)s1;
	s2u = (const uint8_t *)s2;
	i = 0;
	while (s1u[i])
	{
		if (s1u[i] != s2u[i])
			break ;
		i++;
	}
	return (s1u[i] - s2u[i]);
}
