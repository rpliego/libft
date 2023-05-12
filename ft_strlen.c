/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:09:19 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/03 12:27:03 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	aux;
	int	cont;

	cont = 0;
	aux = 0;
	while (c[aux] != '\0')
	{
		cont++;
		aux++;
	}
	return (cont);
}
/*
int	main(void)
{
	const char	c[] = "123456789123456789";

	printf("%lu", strlen(c));
	printf("%zu", ft_strlen(c));
	return (0);
}
*/