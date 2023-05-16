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

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;
	size_t	copy_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	total_len = dest_len + src_len;
	if (dest_len >= size)
		return (size + src_len);
	copy_len = size - dest_len - 1;
	while (src[i] != '\0' && i < copy_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	stri[] = "lorem ipsum dolor sit amet";
// 	char	stri2[] = "r";

// 	printf("%zu\n", strlcat(stri2, stri, 5));
// 	printf("%zu\n", ft_strlcat(stri2, stri, 5));
// }
