/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:25:32 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/09 15:25:34 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	w;
	void	*q;

	w = count * size;
	q = malloc(w);
	if (!q)
		return (NULL);
	ft_bzero(q, w);
	return (q);
}

// int	main(void)
// {
// 	size_t	tr = 2;
// 	size_t	ty = 2;

// 	ft_calloc(tr, ty);
// }
