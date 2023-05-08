/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:58:39 by rpliego           #+#    #+#             */
/*   Updated: 2023/02/27 18:58:40 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dstlen < size && dest[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	i = dstlen;
	while (i < size - 1 && *src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	if (dstlen > size)
		return (size + srclen);
	else
		return (dstlen + srclen);
}

// int	main(void)
// {
// 	char	stri[] = "AAbvcdv";
// 	char	stri2[] = "12312341";

// 	printf("Mio  %s convierte en esto %zu\n", stri, ft_strlcat(stri, stri2, 5));
// 	printf("Bueno  %s convierte en esto %zu\n", stri, strlcat(stri, stri2, 5));
// }
