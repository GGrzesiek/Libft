/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 13:43:09 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 13:50:26 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	test_func(unsigned int i, char *ch) {
	*ch = *ch + 1;
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* int main()
{
	char s1[] = "abc";
	char s2[] = "123";
	char s3[] = "";

	ft_striteri(s1, test_func);
	ft_striteri(s2, test_func);
	ft_striteri(s3, test_func);

	printf("Modified: %s\n", s1); // Expected: "bcd"
	printf("Modified: %s\n", s2); // Expected: "234"
	printf("Modified: %s\n", s3); // Expected: ""

	return (0);
} */
