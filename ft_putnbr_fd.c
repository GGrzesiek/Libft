/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:05:00 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 14:09:20 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char *str;
	int i;

	str = ft_itoa(n);
	i = 0;
	while(str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int main()
{
	ft_putnbr_fd(123,2);
}