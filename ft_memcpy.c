/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:46:23 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 14:22:45 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == NULL || src == NULL)
		return (NULL);
	d = dest;
	s = src;
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