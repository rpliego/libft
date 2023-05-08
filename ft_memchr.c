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

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		*cstr;
	size_t		i;

	cstr = (char *)str;
	i = 0;
	while (*cstr && i <= n)
	{
		if (*cstr == c)
			return ((void *)cstr);
		cstr++;
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     char strd[50] = "Ayudaaaaaaaa bunas noches";
// 	int c;

// 	c = 'd';
//    	printf("El mio(): %s\n", ft_memchr(strd, c, 4));
//     printf("El bueno(): %s", memchr(strd, c, 4));
// }