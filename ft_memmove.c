/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:14:12 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/22 13:21:59 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == NULL || src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/* int main() 
{ 
    char str1[100] = "Geeks"; // Array of size 100 
    char str2[5] = "Quiz"; // Array of size 5 
    printf("str1 before memmove "); 
    printf("%s",str1); 
  
// memmove(str1, str2, sizeof(str2));
ft_memmove(str1, str2, sizeof(str2));
printf("\nstr1 after memmove ");
printf("%s", str1);

return (0);
}
*/