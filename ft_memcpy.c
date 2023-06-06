/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidoneux <sidoneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:57:22 by sidoneux          #+#    #+#             */
/*   Updated: 2023/06/06 16:01:06 by sidoneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dstb;
	const unsigned char	*srcb;

	if (!dst && !src)
		return (0);
	dstb = (unsigned char *)dst;
	srcb = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstb[i] = srcb[i];
		i++;
	}
	return (dst);
}
