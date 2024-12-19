/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:02:58 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 14:35:59 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		n--;
		p++;
	}
	return (s);
}

/* int main()
{
	char str[20] = "aaaabbbbbbsssss";
	ft_memset(str, '+', 4);
	printf("%s", str);
} */