/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:06:50 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/11 10:56:12 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	while (len)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		len--;
	}
	return (NULL);
}
