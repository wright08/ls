/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 06:02:25 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 21:19:09 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_ctype.h"
#include "ft_string.h"
#include "ft_stdlib.h"

static void	parse_flags(t_conv *conv, const char **format)
{
	while (**format && ft_strchr("#0- +", **format))
	{
		if (ft_strlen(conv->flags) < 6 && !ft_strchr(conv->flags, **format))
			ft_strncat(conv->flags, *format, 1);
		(*format)++;
	}
}

static void	parse_width(t_conv *conv, const char **format, va_list ap)
{
	if (**format == '*')
	{
		conv->width = va_arg(ap, int);
		if (conv->width < 0)
		{
			if (!ft_strchr(conv->flags, '-'))
				ft_strcat(conv->flags, "-");
			conv->width = -conv->width;
		}
	}
	else if (ft_isdigit(**format))
		conv->width = ft_atoi(*format);
	while (ft_isdigit(**format))
		(*format)++;
}

static void	parse_precision(t_conv *conv, const char **format, va_list ap)
{
	conv->precision = -1;
	if (**format == '.')
	{
		(*format)++;
		conv->precision = (**format == '*') ?
			va_arg(ap, int) : ft_atoi(*format);
		if (conv->precision < 0)
			conv->precision = 0;
	}
	while (**format == '-' || ft_isdigit(**format))
		(*format)++;
}

static void	parse_len_mod(t_conv *conv, const char **format)
{
	while (**format && ft_strchr("lLhjz", **format))
	{
		if (ft_strlen(conv->len_mod) < 2)
			ft_strncat(conv->len_mod, *format, 1);
		(*format)++;
	}
}

void		parse_fmt(t_conv *conv, const char **format, va_list ap)
{
	parse_flags(conv, format);
	parse_width(conv, format, ap);
	parse_precision(conv, format, ap);
	parse_len_mod(conv, format);
}
