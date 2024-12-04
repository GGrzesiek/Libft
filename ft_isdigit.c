/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:37:41 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/04 15:33:09 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int is_digit;
	
	is_digit = 1;
	while(c != '\0')
	{
		if(!(c >= 48 && c <= 57))
		{
				is_digit = 0;
		}
	}
	return is_digit;
}

