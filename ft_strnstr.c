/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:15:06 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/22 10:54:46 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lit_len;

	i = 0;
	if (!little || *little == '\0')
		return ((char *)big);
	lit_len = ft_strlen(little);
	while (big[i] != '\0' && len != 0)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && little[j] && (i + j) < len)
			{
				if (j == lit_len - 1)
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
