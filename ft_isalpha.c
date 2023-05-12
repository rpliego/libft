/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:41:53 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/02 18:16:15 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
int main(void)
{
	char	c;

	c = 94;
	printf("%d", isalpha(c));
	printf("%d", ft_isalpha(c));
	return(0);
}
*/
