/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:37:26 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/22 21:13:23 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lng;
	t_list	*tmp;

	lng = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		lng++;
	}
	return (lng);
}
