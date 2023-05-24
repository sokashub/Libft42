/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:33:49 by sokashub          #+#    #+#             */
/*   Updated: 2023/03/16 00:53:59 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*new_str;
	size_t	i;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (len > start && ft_strchr(set, s1[len - 1]))
		len--;
	new_str = (char *)malloc(sizeof(char) * (len - start + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (start < len)
	{
		new_str[i] = s1[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}
