/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:31:31 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/16 20:31:33 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*out;
	int		len;
	int		neg;
	int		aux;

	len = 0;
	neg = 0;
	aux = n;
	if (n == 0)
	{
		out = malloc(2 * sizeof(char));
		out[0] = '0';
		out[1] = '\0';
		return (out);
	}
	if (n < 0)
	{
		n = n * -1;
		neg = 1;
		aux = -aux;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	n = aux;
	len = len + neg;
	aux = len;
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	out[len] = '\0';
	while (len-- >= neg)
	{
		out[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (neg == 1)
			out[0] = '-';
	return (out);
}
