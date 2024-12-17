/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 14:24:00 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/17 15:27:32 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*big;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	big = (char *)malloc(size);
	if (!big)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		big[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		big[i + j] = s2[j];
		j++;
	}
	big[i + j] = '\0';
	return (big);
}

/* int main(void)
{
   char *string = "this is123 a copy";
   char *newstr = "and this is 21231231";
   char *bigone;
   
   if ((bigone = ft_strjoin(string,newstr)) != NULL)
      printf("The new string is: %s\n", bigone);
   return (0);
} */