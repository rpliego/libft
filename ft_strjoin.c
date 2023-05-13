/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:22:33 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/13 13:27:18 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*out;
	size_t		p;
	size_t		i;
	size_t		lens1;
	size_t		lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	out = (char *)malloc(lens1 + lens2 + 1);
	if (!out)
		return (NULL);
	i = 0;
	p = 0;
	while (i < lens1)
	{
		out[i] = ((char *)s1)[i];
		i++;
	}
	while (p < lens2)
	{
		out[i + p] = ((char *)s2)[p];
		p++;
	}
	out[i + p] = '\0';
	return (out);
}

// int	main (void)
// {
// 	char  *str1 = "hola";
// 	char  *str2 = " buenas";

// 	ft_strjoin(str1, str2);
// }