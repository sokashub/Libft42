/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokashub <sokashub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:01:44 by sokashub          #+#    #+#             */
/*   Updated: 2023/03/15 23:27:39 by sokashub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	nstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!nstr)
		return (NULL);
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nstr[i] = s2[j];
		j++;
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
