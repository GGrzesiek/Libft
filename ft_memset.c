/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:02:58 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/04 17:36:12 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *memset(void *s, int c, size_t n)
{	
	unsigned char *p;
	while(n > 0)
	{
		//printf("%c",s);
		
		*p = (unsigned char)c;
		n--;
		p++;
	}
	return s;
}