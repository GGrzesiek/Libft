/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:36:12 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/05 16:31:15 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int isascii;
	isascii = 1;

	if (!(c >= 0 && c <= 127))
	{
		isascii = 0;
	}

	return (isascii);
}