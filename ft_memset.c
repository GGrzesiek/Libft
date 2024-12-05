/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:02:58 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/05 16:35:02 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	*p = s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		n--;
		p++;
	}
	return (s);
}
