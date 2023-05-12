/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:26:43 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 22:26:47 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	size_t	i;
	size_t	aux;

	aux = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		aux = 0;
		while (haystack[i + aux] == needle[aux] && i + aux < len)
		{	
			if (haystack[i + aux] == '\0' && needle[aux] == '\0')
				return ((char *)&haystack[i]);
		aux++;
		}
		if (needle[aux] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	stri[] = "the cake is a lie !\0I'm hidden lol\r\n";
// 	char	stri2[] = "th er";

// 	printf("%s\n", strnstr(stri, stri2, 7));
// 	printf("%s\n", ft_strnstr(stri2, stri, 0));
// }