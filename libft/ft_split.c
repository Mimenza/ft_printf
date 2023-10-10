/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:33:58 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 11:10:09 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Reserva (utilizando malloc(3)) un array de strings
// resultante de separar la string ’s’ en substrings
// utilizando el caracter ’c’ como delimitador. El
// array debe terminar con un puntero NULL.

static int	ft_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s[i] != c)
		count++;
	while (s[i])
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1]))
			count++;
		i++;
	}
	return (count);
}

//size = i - start
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**str;

	i = 0;
	j = 0;
	str = ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!s || !str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			str[j] = ft_substr(s, start, i - start);
			j++;
		}
	}
	return (str);
}

// int main(void)
// {
// 	char *str = "*hello**world***!**";
// 	char **splt;

// 	splt = ft_split(str, '*');
// 	printf("%s", splt[0]);
// 	printf("%s", splt[1]);
// 	printf("%s", splt[2]);
// 	return (0);
// }
