/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 03:13:50 by sokashub          #+#    #+#             */
/*   Updated: 2023/05/22 19:46:06 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_dst == p_src)
		return (dst);
	if (p_dst < p_src)
	{
		while (len--)
			*p_dst++ = *p_src++;
	}
	else
	{
		p_dst = p_dst + len;
		p_src = p_src + len;
		while (len--)
			*--p_dst = *--p_src;
	}
	return (dst);
}
