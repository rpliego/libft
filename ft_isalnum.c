/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:08:52 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/02 19:09:34 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(unsigned char a)
{
	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z' || a >= '0' && a <= '9')
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	unsigned char	a;

	a = 'A';
	printf("%d", isalnum(a));
	printf("%d", ft_isalnum(a));
	return (0);
}
*/