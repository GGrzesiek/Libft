/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:02:46 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/11 13:16:12 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	while (n--)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (0);
}

/* int main()
{
	char	str[] = {0, 1, 65, 3, 4, 5};
	char	str2[] = {0, 1, 43, 3, 4, 5};
	
	printf("%d\n", ft_memcmp(str, str2, 2));
	printf("%d\n", memcmp(str, str2, 2));

}  */