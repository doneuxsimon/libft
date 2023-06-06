/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidoneux <sidoneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:03:13 by sidoneux          #+#    #+#             */
/*   Updated: 2023/06/06 16:01:06 by sidoneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dstb;
	const unsigned char	*srcb;

	dstb = (unsigned char *)dst;
	srcb = (const unsigned char *)src;
	i = 0;
	if (dst >= src)
	{
		while (i < len)
		{
			dstb[(len - i) - 1] = srcb[(len - i) - 1];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			dstb[i] = srcb[i];
			i++;
		}
	}
	return (dst);
}
