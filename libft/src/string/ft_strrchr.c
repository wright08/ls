/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:10:03 by rwright           #+#    #+#             */
/*   Updated: 2019/06/07 16:38:35 by rwright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	const char *last;

	last = 0;
	while (*str)
	{
		if (*str == c)
			last = str;
		str++;
	}
	return ((char *)(*str == c ? str : last));
}
