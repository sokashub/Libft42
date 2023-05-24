/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:20:23 by sokashub          #+#    #+#             */
/*   Updated: 2023/03/15 18:02:05 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*voidptr;

	i = 0;
	voidptr = (unsigned char *)b;
	while (i < len)
	{
		voidptr[i] = c;
		i++;
	}
	return (b);
}
