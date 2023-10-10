/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:34:20 by emimenza          #+#    #+#             */
/*   Updated: 2023/09/27 10:13:23 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.

int	ft_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		size;
	int		s_size;
	char	*ptr;
	long	num;

	num = n;
	size = ft_len(num);
	s_size = size;
	ptr = (char *)ft_calloc (size + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	if (num < 0)
	{
		num = num * -1;
		ptr[0] = '-';
	}
	while ((size > 0 && ptr[0] != '-') || (ptr[0] == '-' && size > 1))
	{	
		ptr[size - 1] = (num % 10) + 48;
		num = num / 10;
		size--;
	}
	ptr[s_size] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	int		num = 12342;
// 	char	*res = ft_itoa(num);
// 	printf("result: %s", res);
// }