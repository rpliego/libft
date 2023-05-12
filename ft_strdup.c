/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:17:40 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/12 15:17:42 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*fra;
	size_t	c;

	c = 0;
	fra = ft_calloc(sizeof(char), ft_strlen(str) + 1);
	if (fra == NULL)
		return (NULL);
	while (str[c])
	{
		fra[c] = str[c];
		c++;
	}
	return (fra);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "holaa";
// 	char	*res;

// 	res = ft_strdup(str);
// 	printf("%s", res);
// }
