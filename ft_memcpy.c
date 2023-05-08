/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:04:28 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/04 12:25:11 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	s;

	cdest = (char *)dest;
	csrc = (char *)src;
	s = 0;
	while (s < n)
	{
		cdest[s] = csrc[s];
		s++;
	}
	return (cdest);
}
/*
int main(void)
{
    char strd[50] = "Ayudaaaaaaaa bunas noches";
	char strs[50] = "el nuevoo";

    printf("\nEl mio(): %s\n", ft_memcpy(strd, strs, 4));
    printf("El bueno(): %s", memcpy(strd, strs, 4));
}
*/