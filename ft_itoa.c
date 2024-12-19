/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:33:56 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 12:55:00 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sign_check(long int *tmp)
{
	if (*tmp < 0)
	{
		*tmp = (*tmp) * -1;
		return (1);
	}
	return (0);
}

int	num_len(long int n)
{
	int	len;

	len = 1;
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

long int	power(long int nb, int pow)
{
	int	i;
	int	tmp;

	tmp = nb;
	i = 0;
	while (i < pow)
	{
		nb = nb * tmp;
		i++;
	}
	return (nb);
}

void	write_to_str(char *str, int i, int len, long int nb)
{
	long int	singl_dig;
	int			j;

	j = 0;
	while (len > i)
	{
		singl_dig = nb % power(10, j);
		nb -= singl_dig;
		while (singl_dig >= 10)
			singl_dig /= 10;
		str[len - 1] = singl_dig + '0';
		len--;
		j++;
	}
}

char	*ft_itoa(int n)
{
	long int	tmp;
	int			i;
	int			len;
	int			is_neg;
	char		*str;

	i = 0;
	tmp = n;
	is_neg = sign_check(&tmp);
	len = (num_len(tmp) + is_neg);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (is_neg)
	{
		str[i] = '-';
		i++;
	}
	write_to_str(str, i, len, tmp);
	return (str);
}

/* int	main(void)
{
	int num = INT_MIN;
	char *string;

	string = ft_itoa(num);
	printf("string = %s\n", string);
	return (0);
} */