/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 00:59:30 by sokashub          #+#    #+#             */
/*   Updated: 2023/04/01 20:53:12 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * It takes a string, a character, and a buffer, and splits the string into 
 * an array of strings, using the character as a delimiter
 * 
 * @param arr the array of strings that will be returned
 * @param buf a buffer to store the string in
 * @param s the string to be split
 * @param c the delimiter
 */
void	ft_wrstr(char **arr, char *buf, const char *s, char c)
{
	long	count;
	long	i;
	long	j;

	count = 0;
	i = -1;
	j = 0;
	while (i == -1 || s[i])
	{
		i++;
		if (s[i] == c || s[i] == '\0')
		{
			if (i != j)
			{
				ft_memcpy(buf, s + j, i - j);
				buf[i - j] = '\0';
				arr[count++] = ft_strdup(buf);
			}
			j = i + 1;
		}
	}
	arr[count] = NULL;
	free(buf);
}

/**
 * Counts the words that there are in a string
 * 
 * @param s The string
 * @param c the character that separates the words
 */
int	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;
	int	finished_word;

	count = 0;
	finished_word = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && finished_word == 0)
		{
			count++;
			finished_word = 1;
		}
		if (s[i] == c)
		{
			finished_word = 0;
		}
		i++;
	}
	return (count);
}

/**
 * "It splits a string into an array of strings", using a given character as a 
 * delimiter
 * 
 * @param s the string to split
 * @param c the character to split on
 * 
 * @return An array of strings.
 */
char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	*buf;
	char	**arr;
	int		words;

	len = ft_strlen(s);
	buf = malloc(len + 1);
	if (!buf)
		return (0);
	words = ft_count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (!arr)
	{
		free(buf);
		return (0);
	}
	arr[words] = NULL;
	ft_wrstr(arr, buf, s, c);
	return (arr);
}

/*printf("Words: %i\n", words);
int	main(void)
{
//	ft_split("I LIKE THE GREEN COFFEE", ' ');
//	ft_split("Some other words I am doing test potaotes", ' ');
	printf("%s\n", ft_split("ONEBIGWORDNOSPACESHAHAHA", ' ')[0]);
//	ft_split("LOTS        OF        SPACES", ' ');
//	ft_split("I LIKE THE GREEN COFFEE    ", ' ');
//	ft_split("    I LIKE THE GREEN COFFEE", ' ');
//	ft_split("       ", ' ');
//	ft_split("", ' ');
}
*/
