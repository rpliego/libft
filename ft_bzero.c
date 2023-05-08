/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:19:23 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/03 17:44:50 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	*ft_bzero(void *str, size_t l)
{
	unsigned char	*x;

	x = str;
	while (l--)
	{
		*x++ = 0;
	}
	return (x);
}
/*
int main(void)
{
    char str[50] = "Ayudaaaaaaaa bunas noches";
    printf("\nEl mio(): %s\n", ft_bzero(str, 4));

    printf("El bueno(): %s", bzero(str,2));
}
*/
