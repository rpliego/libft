/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:57:15 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/04 14:45:52 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	temp;
	unsigned int	aux;

	temp = 0;
	aux = 0;
	while (src[temp] != '\0')
	{
		temp++;
	}
	if (size != '\0')
	{
		while (src[aux] != '\0' && aux < (size - 1))
		{
			dest[aux] = src[aux];
			aux++;
		}
		dest[aux] = '\0';
	}
	return (temp);
}
/*
int	main(void)
{
	char	stri1[] = "AAAABBBB";
	char	stri2[] = "12312341";

	printf("Esto %s se convierte en %zu\n", stri1, ft_strlcpy(stri1, stri2, 2));
}
*/