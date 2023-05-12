/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:22:58 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 16:25:25 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *st1, const char *st2, size_t n)
{
	size_t			i;

	i = 0;
	if (n == 0)
		return (0);
	while (*st1 && *st2 && st1[i] && st2[i] && st1[i] == st2[i] && i < n -1)
	{
		if (st1[i] == st2[i] && st1[i] == '\0' && st2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char)st1[i] - (unsigned char)st2[i]);
}

// int	main(void)
// {
// 	char str1[] = "abcdef";
// 	char str2[] = "abcdefghijklmnop";

// 	printf("El bueno: %d\n", strncmp(str1, str2, 6));
// 	printf("El mio: %d\n", ft_strncmp(str1, str2, 6));
// 	return (0);
// }