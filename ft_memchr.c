/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:51:15 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 19:45:13 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char		*cstr;
	size_t				i;

	cstr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (*cstr == (unsigned char )c)
			return ((void *)&cstr[0]);
		cstr++;
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char *strd = "/|\x12\xff\x09\x42\2002\42|\\";
// 	int c;

// 	c = '\200';
//    	printf("El mio(): %s\n", ft_memchr(strd, c, 10));
//     printf("El bueno(): %s", memchr(strd, c, 10));
// }
