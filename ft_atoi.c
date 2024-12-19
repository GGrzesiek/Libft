/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:52:39 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 14:17:56 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	count;

	res = 0;
	count = 0;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	while (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			count++;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	if (count % 2 != 0)
		res = -res;
	return (res);
}

/* int	main(void)
{
	int num;
	char *string;

	string = "-214748364854234234234";
	// num = ft_atoi(string);
	// printf("string = %d\n", num);
	num = atoi(string);
	printf("string = %d\n", num);
	return (0);
} */