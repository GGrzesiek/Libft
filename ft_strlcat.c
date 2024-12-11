/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:41:53 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/11 10:54:49 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	i = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[i + dest_len] = '\0';
	return (src_len + dest_len);
}
