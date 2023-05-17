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

char	*casos(int n, int *a)
{
	char	*out;

	if (n == 0)
	{
		out = ft_strdup("0");
		if (!out)
		{
			*a = 0;
			return (NULL);
		}
		*a = 2;
		return (out);
	}
	if (n == -2147483648)
	{
		out = ft_strdup("-2147483648");
		if (!out)
		{
			*a = 0;
			return (NULL);
		}
		*a = 2;
		return (out);
	}
	return (NULL);
}

void	count(int n, int *len, int *neg, int *aux)
{
	*len = 0;
	*neg = 0;
	*aux = n;
	if (n < 0)
	{
		n = n * -1;
		*neg = 1;
		*aux = -(*aux);
	}
	while (n > 0)
	{
		(*len)++;
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*out;
	int		len;
	int		neg;
	int		aux;
	int		a;

	a = 1;
	out = casos(n, &a);
	if (a != 1)
		return (out);
	count(n, &len, &neg, &aux);
	n = aux;
	len = len + neg;
	out = malloc((len + 1) * sizeof(char));
	if (!out)
		return (NULL);
	out[len] = '\0';
	while (len--)
	{
		out[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (neg == 1)
			out[0] = '-';
	return (out);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		n;
// 	char	*res;

// 	n = -0;
// 	res = ft_itoa(n);
// 	printf("%s\n", res);
// }
