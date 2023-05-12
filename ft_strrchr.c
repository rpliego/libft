/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:01:47 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 16:01:48 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int c)
{
	const char	*ret;

	ret = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			ret = str;
		str++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)str);
	return ((char *)ret);
}

// int	main(void)
// {
// 	const char	str[] = "Hola muy buenas";
// 	const char	ch = 'z';

// 	printf("El bueno: %s\n", strrchr(str, ch));
// 	printf("El mio: %s\n", ft_strrchr(str, ch));

// 	return (0);
// }
