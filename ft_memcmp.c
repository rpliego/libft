/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:13:37 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 22:13:38 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*cstr1;
	unsigned char	*cstr2;

	cstr1 = (unsigned char *)str1;
	cstr2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (*cstr1 == *cstr2 && n - 1 > 0)
	{
		cstr1++;
		cstr2++;
		n--;
	}
	return (*cstr1 - *cstr2);
}

// int main(void)
// {
//     char strd[] = "\xff\xaa\xde\200";
// 	char strs[] = "\xff\xaa\xde\0";

//     printf("\nEl mio(): %d\n", ft_memcmp(strd, strs, 8));
//     printf("El bueno(): %d", memcmp(strd, strs, 8));
// }