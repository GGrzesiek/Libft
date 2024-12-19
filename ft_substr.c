/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:20:54 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 14:55:40 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc(len);
	if (!sub)
		return (NULL);
	s += start;
	while (i < len && s[i] != '\0')
	{
		sub[i] = s[i];
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