/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:52:06 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/04 17:31:50 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 


int main(int argc, char *argv[])
{
	int wartosc;
	char* str = "Siemanoooooo";
	void* c;
	
	(void)argc;
	memset(str,'#',4);
	printf("%s", str);
}