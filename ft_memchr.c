/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:10:05 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/11 12:02:18 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/* int main()
{
	char	s[] = {0, 1, 2, 3, 4, 5};

	printf("%d\n", ft_memchr(s, 2, 3));
	printf("%d\n", memchr(s, 2, 3));
} */
