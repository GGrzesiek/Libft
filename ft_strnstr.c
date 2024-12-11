/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:15:06 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/11 13:27:21 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (*little == '\0')
		return big;
	while(big[i] != '\0' && len > 0)
	{
		if (big[i]== little[0])
		{
			while(*little)
			{
				little++;
			}
		}
		big++;
		len--;
	}
	return 0;
}
