/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 04:35:09 by sokashub          #+#    #+#             */
/*   Updated: 2023/04/01 18:40:10 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int o)
{
	char	c;

	c = (char)o;
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}
