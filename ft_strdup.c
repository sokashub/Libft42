/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 22:14:22 by sokashub          #+#    #+#             */
/*   Updated: 2023/03/15 22:35:01 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1cpy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	s1cpy = malloc((len + 1) * sizeof(char));
	i = 0;
	if (s1cpy == 0)
		return (0);
	while (i < len)
	{
		s1cpy[i] = s1[i];
		i++;
	}
	s1cpy[i] = '\0';
	return (s1cpy);
}
