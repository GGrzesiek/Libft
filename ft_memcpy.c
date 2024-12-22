/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:46:23 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/22 14:15:01 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}

/* int main()
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 23, 42, 0};
	char s4[] = {};
	memcpy(s2, s3, 4);
	
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", s2[i]);
	}
	printf("\n%s", s2);

} */