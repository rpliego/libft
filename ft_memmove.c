/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:34:42 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/04 13:52:41 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char	*cstr1;
	char	*cstr2;
	size_t	l;

	cstr1 = (char *)str1;
	cstr2 = (char *)str2;
	l = 0;
	if (str1 < str2)
	{
		while (l < n)
		{
			cstr1[l] = cstr2[l];
			l++;
		}
	}
	else if (str1 > str2)
	{
		while (n > l)
		{
			cstr1[n - 1] = cstr2[n - 1];
			n--;
		}
	}
	return (cstr1);
}

// int	main(void)
// {
//     char strd[50] = "Ayud";
// 	char strs[50] = "el nuevoo";

//     printf("El mio(): %s\n", ft_memmove(strd, strs, 7));
//     printf("El bueno(): %s\n", memmove(strd, strs, 7));
// }
