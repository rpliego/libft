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

#include "libft.h"

// char	*ft_strchr(const char *s, int c)
// {
// 	return (ft_memchr(s, c, ft_strlen(s) + 1));
// }

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)str + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}
// int	main(void)
// {
// 	const char	str[] = "teste";
// 	// const char	ch = 1024;

// 	printf("El bueno: %s\n", strchr("teste", 2048));
// 	printf("El mio: %s\n", ft_strchr(str, 2048));

// 	return (0);
// }
