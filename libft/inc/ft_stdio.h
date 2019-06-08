/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <rwright@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:41:12 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:03:33 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <sys/types.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char *str);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
ssize_t	ft_putstr(char *s);
ssize_t	ft_putstr_fd(const char *str, int fd);
int		get_next_line(const int fd, char **line);
int		ft_printf(const char *format, ...);

#endif
