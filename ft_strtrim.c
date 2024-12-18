/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:29:44 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/18 15:40:49 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (c == (char)set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > 0 && is_in_set(s1[end], set))
		end--;
	if (end <= 0)
		return (ft_calloc(1, sizeof(char)));
	newstr = (char *)ft_calloc(((end + 1) - start + 1), sizeof(char));
	if (!newstr)
		return (NULL);
	i = -1;
	while (++i < (end - start + 1))
		newstr[i] = s1[start + i];
	newstr[i] = 0;
	return (newstr);
}
/* 
int	main(void)
{
	char *x;
	x = ft_strtrim(" 1212grzechu12    ewf", "12");
	printf("|%s|\n", x);
	free(x);
} */