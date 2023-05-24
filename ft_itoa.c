/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 01:38:05 by sokashub          #+#    #+#             */
/*   Updated: 2023/04/01 19:02:25 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printnum(char *s, unsigned int n, int len, int sign)
{
	while (len >= sign)
	{
		s[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int				len;
	int				sign;
	unsigned int	nu;
	char			*str;

	sign = 0;
	if (n < 0)
	{
		nu = -n;
		sign = 1;
	}
	else
		nu = n;
	len = 1;
	while (n / 10 && len++)
		n /= 10;
	str = (char *)malloc(sizeof(char) * (len + sign + 1));
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	str[len + sign] = '\0';
	ft_printnum(str, nu, len + sign - 1, sign);
	return (str);
}
