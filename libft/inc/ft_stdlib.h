/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <rwright@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:42:04 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:44:19 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stddef.h>

int		ft_atoi(const char *str);
char*	ft_itoa(int n);
char*	ft_lltoa(long long n);
char*	ft_ulltoa_base(unsigned long long n, int base);
void*	ft_memalloc(size_t size);

#endif
