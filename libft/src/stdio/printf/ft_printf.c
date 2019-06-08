/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 05:30:49 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:57:51 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_string.h"
#include <unistd.h>

int		has(char *field, char *str)
{
	while (*str)
	{
		if (!ft_strchr(field, *str))
			return (0);
		str++;
	}
	return (1);
}

int		convert(const char **format, va_list ap)
{
	int				i;
	t_conv			conv;
	const t_able	table[] = {	{"c", &conv_char}, {"s", &conv_str},
								{"p", &conv_ptr}, {"diD", &conv_int},
								{"ouxOUX", &conv_uint}, {"%", &conv_mod},
								{"fF", &conv_float}, {0, 0}};

	ft_memset(&conv, 0, sizeof(t_conv));
	(*format)++;
	parse_fmt(&conv, format, ap);
	while (**format)
	{
		conv.type = *(*format)++;
		i = -1;
		while (table[++i].func)
			if (ft_strchr(table[i].keys, conv.type))
				return (table[i].func(&conv, ap));
	}
	return (0);
}

int		next_section(const char **format, va_list ap)
{
	int offset;
	int	printed;

	printed = 0;
	offset = -1;
	while ((*format)[++offset])
		if ((*format)[offset] == '%')
			break ;
	printed = write(1, *format, offset);
	*format += offset;
	if (**format == '%')
		printed += convert(format, ap);
	return (printed);
}

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, format);
	len = 0;
	while (*format)
		len += next_section(&format, ap);
	va_end(ap);
	return (len);
}
