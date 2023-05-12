/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:17:57 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/02 19:22:49 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int i)
{
	if ((i >= 00) && (i <= 127))
		return (1);
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	i;

// 	i = 127;
// 	printf("%d", isascii(i));
// 	printf("%d", ft_isascii(i));
// 	return (0);
// }
