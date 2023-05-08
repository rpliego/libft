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

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		hi;
	int		ni;
	size_t	s;
	char	*out;

	out = (char *)haystack;
	hi = 0;
	s = 0;
	if (*needle == '\0')
		return (out);
	while (out[hi] && s <= len)
	{
		ni = 0;
		while (out[hi + ni] == needle[ni] && out[hi + ni])
		{
			if (out[hi] == needle[ni])
				return (&out[hi]);
			ni++;
		}
		hi++;
		s++;
	}
	return (NULL);
}

// int main (void) 
// {
//    const char haystack[20] = "TutorialsPoint";
//    const char needle[10] = "r";

//    printf("El mio: %s\n", ft_strnstr(haystack, needle, 0));
//    printf("El bueno: %s\n", strnstr(haystack, needle, 0));
//    return(0);
// }