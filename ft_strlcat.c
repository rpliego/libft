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
#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = 0;
	srclen = 0;
	i = 0;
	while (dstlen <= size && dest[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	i = dstlen;
	while (i < size - 1 && *src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	if (dstlen > size)
		return (size + srclen);
	else
		return (dstlen + srclen);
}

// int	main(void)
// {
// 	char	stri[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char	stri2[] = "there is no stars in the sky";

// 	printf("%zu\n", strlcat(stri2, stri, 0));
// 	printf("%zu\n", ft_strlcat(stri2, stri, 0));
// }
