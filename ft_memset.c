/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:07:03 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/03 16:07:15 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int a, size_t len)
{
	unsigned char	*w;

	w = b;
	while (len-- > 0)
		*w++ = (unsigned char)a;
	return (b);
}
/*
int main(void)
{
    char str[50] = "Ayudaaaaaaaa bunas noches";
    printf("\nmio(): %s\n", ft_memset(str, '.', 2*sizeof(char)));

    memset(str, '.', 2*sizeof(char));
  
    printf("After memset():  %s", str);
    return 0;
}
*/
