/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:51:48 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 13:51:51 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hola muy buenas";
	const char	ch = 'a';

	printf("El bueno: %s\n", strchr(str, ch));
	printf("El mio: %s\n", ft_strchr(str, ch));

	return (0);
}
*/