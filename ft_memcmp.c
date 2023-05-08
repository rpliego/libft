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
	size_t	i;
	char	*cstr1;
	char	*cstr2;

	cstr1 = (char *)str1;
	cstr2 = (char *)str2;
	i = 0;
	while (cstr1[i] && cstr2[i] && i <= n)
	{
		if (cstr1[i] != cstr2[i])
		{
			return (cstr1[i] - cstr2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char strd[50] = "ayudaaaaaaaa bunas noches";
	char strs[50] = "Al nuevoo";

    printf("\nEl mio(): %d\n", ft_memcmp(strd, strs, 4));
    printf("El bueno(): %d", memcmp(strd, strs, 4));
}
*/