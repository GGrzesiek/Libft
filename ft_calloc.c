/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:11:32 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/17 11:09:46 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*data;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb && (nmemb * size) / nmemb != size)
		return (NULL);
	data = (void *)malloc(nmemb * size);
	if (!data)
		return (NULL);
	ft_bzero(data, nmemb * size);
	return (data);
}

/* int main()
{
	size_t nmemb = 8;
	size_t size = sizeof(int);
	size_t i = 0;
	int* allocated_with_calloc = ft_calloc(nmemb, size);
	
	if (allocated_with_calloc == NULL)
    {
        printf("ft_calloc failed\n");
        return (1);
    }
	
	printf("Values of allocated_with_calloc: ");
    while (i++ < nmemb)
	{
		printf("%d ", allocated_with_calloc[i]);
        if (allocated_with_calloc[i] != 0)
        {
            printf("Memory not zeroed at index %zu\n", i);
            free(allocated_with_calloc);
            return (1);
        }
    }
    printf("ft_calloc succeeded and memory is zeroed\n");
    free(allocated_with_calloc);
    putchar('\n');
	return (0);
} */