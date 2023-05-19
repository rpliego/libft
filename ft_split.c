/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:31:27 by rpliego           #+#    #+#             */
/*   Updated: 2023/05/17 19:31:28 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	how_words(char const *s, char c)
{
	int	word;
	int	flag;

	flag = 0;
	word = 0;
	while (*s != '\0')
	{
		if (*s != c && flag == 0)
		{
			word++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (word);
}

static char	*next_w(char const **a, char d)
{
	const char			*start;
	unsigned int		word_length;
	char				*word;

	start = *a;
	while (**a != '\0' && **a != d)
		(*a)++;
	word_length = (*a - start);
	word = malloc((word_length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, (char *)start, word_length + 1);
	return (word);
}

void	*ft_free(char **out, int i)
{
	while (--i >= 0)
		free(out[i]);
	free(out);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	char	*word;
	int		i;

	out = (char **)malloc((how_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			word = next_w(&s, c);
			if (word == NULL)
				return (ft_free(out, i));
			out[i] = word;
			i++;
		}
		else
			s++;
	}
	out[i] = NULL;
	return (out);
}
