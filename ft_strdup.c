/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidoneux <sidoneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:34:54 by sidoneux          #+#    #+#             */
/*   Updated: 2023/05/11 16:34:54 by sidoneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;

	if (!s)
		return (NULL);
	cpy = ft_calloc(ft_strlen(s) + 1, sizeof(*cpy));
	if (!cpy)
		return (NULL);
	return (ft_memcpy(cpy, s, ft_strlen(s)));
}
