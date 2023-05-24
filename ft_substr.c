/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:40:36 by sokashub          #+#    #+#             */
/*   Updated: 2023/03/15 22:57:41 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*subs;

	if (!s)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s) && s[start + i])
		i++;
	j = 0;
	subs = malloc((i + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	while (j < i && start < ft_strlen(s))
	{
		subs[j] = s[start + j];
		j++;
	}
	subs[i] = '\0';
	return (subs);
}
