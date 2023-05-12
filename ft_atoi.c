/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:16:19 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/08 17:16:21 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	count;
	int	num;

	num = 0;
	a = 0;
	count = 1;
	while (str[a] == '\t' || str[a] == '\n' || str[a] == '\v'
		|| str[a] == '\f' || str[a] == '\r' || str[a] == ' ')
		a++;
	if (str[a] == '-')
	{
		count = -1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	while (str[a] <= '9' && str[a] >= '0')
	{
		num = num * 10 + str[a] - '0';
		a++;
	}
	return (num * (count));
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main (void) 
// {
//    char str[20];

//    strcpy(str, "+12");
//    printf("el bueno = %s, Int value = %d\n", str,atoi(str));

//    strcpy(str, "+12");
//    printf("El mio = %s, Int value = %d\n", str, ft_atoi(str));

//    return(0);
// }
