/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:52:06 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/04 15:31:23 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int ft_strlen(int c);
void *memset(void *s, int c, size_t n);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(int argc, char *argv[])
{
	int wartosc;
	(void)argc;
	wartosc = ft_isalnum(65);
	printf("%d",wartosc);
}