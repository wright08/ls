/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <rwright@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:43:43 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:34:21 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stddef.h>

void*	ft_memccpy(void *dst, const void *src, int c, size_t n);
void*	ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void*	ft_memcpy(void *dst, const void *src, size_t n);
void*	ft_memmove(void *dst, const void *src, size_t n);
void*	ft_memset(void *s, int c, size_t n);
char*	ft_strcat(char *dst, const char *src);
char*	ft_strchr(const char *str, int c);
int		ft_strcmp(const char *s1, const char *s2);
char*	ft_strcpy(char *dst, const char *src);
char*	ft_strdup(const char *str);
char*	ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlen(const char *str);
char*	ft_strncat(char *dst, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char*	ft_strncpy(char *dst, const char *src, size_t n);
char*	ft_strnew(size_t size);
char*	ft_strnstr(const char *haystack, const char *needle, size_t n);
char*	ft_strrchr(const char *str, int c);
char**	ft_strsplit(const char *s, char c);
char*	ft_strstr(const char *haystack, const char *needle);
char*	ft_strsub(char *s, unsigned int start, size_t len);
char*	ft_strtrim(char const *s);

#endif
