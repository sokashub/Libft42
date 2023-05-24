/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:42:34 by sokashub          #+#    #+#             */
/*   Updated: 2023/05/22 22:18:28 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *srs, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = srs;
	if (dst == srs)
		return (0);
	while (n--)
		*d++ = *s++;
	return (dst);
}
