/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 20:00:23 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/13 20:00:25 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*w;

	w = ft_strdup(s);
	i = 0;
	if (!s || !f || !w)
		return (NULL);
	while (s[i])
	{
		w[i] = f(i, w[i]);
		i++;
	}
	w[i] = '\0';
	return (w);
}
