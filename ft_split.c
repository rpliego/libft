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
	word = (char *)malloc((word_length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	ft_strlcpy(word, (char *)start, word_length + 1);
	word[word_length] = '\0';
	return (word);
}

void	*ft_free(char **out, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(out[j]);
		j++;
	}
	free(out);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	char	*word;
	int		i;

	out = malloc((how_words(s, c) + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			word = next_w(&s, c);
			if (word == NULL)
				ft_free(out, i);
			out[i] = word;
			i++;
		}
		else
			s++;
	}
	out[i] = NULL;
	return (out);
}

// #include <stdlib.h>
// #include <string.h>

// unsigned int how_words(const char *s, char c)
// {
//     int word = 0;
//     int flag = 0;

//     while (*s != '\0')
//     {
//         if (*s != c && flag == 0)
//         {
//             word++;
//             flag = 1;
//         }
//         else if (*s == c)
//         {
//             flag = 0;
//         }
//         s++;
//     }

//     return word;
// }

// static char *next_w(const char **a, char d)
// {
//     const char *start = *a;
//     unsigned int word_length;
//     char *word;

//     while (**a != '\0' && **a != d)
//     {
//         (*a)++;
//     }
//     word_length = *a - start;
//     word = (char *)malloc((word_length + 1) * sizeof(char));
//     if (word == NULL)
//     {
//         return NULL;
//     }
//     memcpy(word, start, word_length);
//     word[word_length] = '\0';
//     return word;
// }

// void ft_free(char **out, int i)
// {
//     while (i >= 0)
//     {
//         free(out[i]);
//         i--;
//     }
//     free(out);
// }

// char **ft_split(const char *s, char c)
// {
//     char **out;
//     char *word;
//     int i = 0;
//     int word_count = how_words(s, c);

//     out = (char **)malloc((word_count + 1) * sizeof(char *));
//     if (out == NULL)
//     {
//         return NULL;
//     }

//     while (*s != '\0')
//     {
//         if (*s != c)
//         {
//             word = next_w(&s, c);
//             if (word == NULL)
//             {
//                 ft_free(out, i - 1);
//                 return NULL;
//             }
//             out[i] = word;
//             i++;
//         }
//         else
//         {
//             s++;
//         }
//     }
//     out[i] = NULL;
//     return out;
// }