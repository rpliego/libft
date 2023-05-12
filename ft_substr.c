/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:12:33 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/12 17:12:39 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	lens;
	size_t	i;
	char	*x;

	lens = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start >= lens)
		return (ft_strdup(""));
	if (len > lens)
		len = lens - start;
	x = (char *)malloc(len + 1);
	if (!x)
		return (NULL);
	while (i < start)
	{
		i++;
		s++;
	}
	ft_strlcpy(x, (char *)s, len + 1);
	return (x);
}

/* int	main(void)
{
	char const		*str1 = "i just want this part #############";

	ft_substr(str1, 5, 20);
	printf("%s", ft_substr(str1, 5, 20));
} */
