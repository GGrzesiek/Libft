/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:20:54 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/22 11:45:25 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	sub_len;

	i = 0;
	sub_len = ft_strlen(s) + 1;
	if (!s || !len || start > sub_len)
		return ((char *)malloc(1));
	if (len < sub_len)
		sub_len = len + 1;
	sub = (char *)ft_calloc(sub_len, sizeof(char));
	if (!sub)
		return (NULL);
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}

/* int main(void)
{
   char *string = "this is123 a copy";
   char *newstr;
   if ((newstr = ft_substr(string,5,5)) != NULL)
      printf("The new string is: %s\n", newstr);
   return (0);
} */