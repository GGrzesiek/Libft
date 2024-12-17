/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:15:06 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/17 11:10:24 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > 0)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j])
			{
				j++;
				if (little[j] == '\0')
					return ((char *)&big[i]);
			}
		}
		j = 0;
		i++;
		len--;
	}
	return (NULL);
}
