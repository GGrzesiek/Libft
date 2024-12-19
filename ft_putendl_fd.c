/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:00:00 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/19 14:02:16 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int i;
	char endl;
	
	i = 0;
	endl = '\0';
	while(s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd,&endl,1);
}
/* 
int main()
{
	ft_putendl_fd("SDA",2);
} */