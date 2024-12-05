/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:14:12 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/05 16:55:19 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	mem_overlap(void *dest, const void *src, size_t n)
{
	if (src < dest && src + n < dest)
		return (1);
	if (dest < src && dest + n < src)
		return (1);
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*t;
	size_t	siz;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (!(mem_overlap(dest, src, n)))
	{
		d = dest;
		s = src;
		siz = n;
		while (siz--)
			*t++ = *s++;
		while (n--)
			*d++ = *t++;
	}
	else
		return (NULL);
	return (dest);
}
