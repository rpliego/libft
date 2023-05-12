/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:47:03 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 13:47:07 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
int	main(void)
{
	char	a;

	printf("introduce letra en mayuscula: ");
	scanf("%c", &a);
	printf("La letra en minuscula es: %c\n", ft_toupper(a));
	return (0);
}
*/