/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:53:19 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 13:34:39 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char test_func(unsigned int i, char ch) {
	return ch + 1;
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *newstr;
	int len;
	unsigned int i;

	len = ft_strlen(s);
	i = 0;
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if(!newstr)
		return NULL;
	while(s[i])
	{
		newstr[i] = f(i,s[i]);
		i++;
	}
	return newstr;
}

/* int main()
{
	char s1[] = "abc";
	char s2[] = "123";
	char s3[] = "";

	char *result1 = ft_strmapi(s1, test_func);
	char *result2 = ft_strmapi(s2, test_func);
	char *result3 = ft_strmapi(s3, test_func);

	printf("Original: %s, Modified: %s\n", s1, result1); // Expected: "bcd"
	printf("Original: %s, Modified: %s\n", s2, result2); // Expected: "234"
	printf("Original: %s, Modified: %s\n", s3, result3); // Expected: ""

	free(result1);
	free(result2);
	free(result3);

	return 0;
} */