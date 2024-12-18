/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkryszcz <gkryszcz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:48:52 by gkryszcz          #+#    #+#             */
/*   Updated: 2024/12/18 15:40:55 by gkryszcz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_num(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (str[i + 1] == c || str[i + 1] == '\0')
				count++;
		}
		i++;
	}
	return (count);
}

static char	*get_word(char const *str, int i, int w_len)
{
	int		k;
	char	*word;

	k = 0;
	word = (char *)malloc(sizeof(char) * (w_len + 1));
	if (!word)
		return (NULL);
	while (k < w_len)
	{
		word[k] = str[(i + 1) - w_len + k];
		k++;
	}
	word[k] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		w_len;

	i = 0;
	j = 0;
	w_len = 0;
	arr = (char **)ft_calloc((w_num(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i++] != 0)
	{
		if (s[i] != c)
		{
			w_len++;
			if (s[i + 1] == c || s[i + 1] == 0)
			{
				arr[j++] = get_word(s, i, w_len);
				w_len = 0;
			}
		}
	}
	return (arr);
}

/* int	main(void)
{
	char **x = ft_split("     Finding words to be split  ", ' ');
	int i = 0;

	while (x[i])
	{
		printf("%s\n", x[i]);
		i++;
	}
} */