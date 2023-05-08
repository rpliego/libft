/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 16:22:58 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 16:25:25 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (str1[i] && str2[i] && i <= n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[15] = "Adc";
// 	char str2[15] = "aBC";

// 	printf("El bueno: %d\n", strncmp(str1, str2, 2));
// 	printf("El mio: %d\n", ft_strncmp(str1, str2, 2));
// 	return (0);
// }