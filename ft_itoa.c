/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidoneux <sidoneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:37:12 by sidoneux          #+#    #+#             */
/*   Updated: 2023/05/11 16:37:12 by sidoneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intsize(int n)
{
	int	i;

	i = 0;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*s;
	size_t			nsize;
	unsigned int	un;

	nsize = ft_intsize(n);
	s = ft_calloc(nsize + 1, sizeof(*s));
	if (!s)
		return (NULL);
	s[0] = '0';
	un = n;
	if (n < 0)
	{
		un = -n;
		s[0] = '-';
	}
	while (un)
	{
		s[--nsize] = '0' + un % 10;
		un /= 10;
	}
	return (s);
}
