/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 13:10:40 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/07 13:10:43 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

/*int	main(void)
{
	char	a;

	printf("introduce letra en minuscula: ");
	scanf("%c", &a);
	printf("La letra en mayúscula es: %c\n", ft_toupper(a));
	return (0);
}
*/