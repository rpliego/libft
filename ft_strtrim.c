/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:58:49 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/15 10:58:52 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		l_str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	l_str = ft_strlen(s1);
	while (l_str && ft_strrchr(set, s1[l_str]))
	{	
		l_str--;
	}
	return (ft_substr(s1, 0, l_str + 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const *a = "abbaholaacaabba";
// 	char const *b = "ab";

// 	printf("El mio: %s\n", ft_strtrim(a, b));
// }