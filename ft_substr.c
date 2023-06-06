/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidoneux <sidoneux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:35:13 by sidoneux          #+#    #+#             */
/*   Updated: 2023/05/11 16:35:13 by sidoneux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start + 1)
		len = ft_strlen(s) - start;
	else if (start > ft_strlen(s))
		return (ft_strdup(""));
	cpy = ft_calloc(len + 1, sizeof(char));
	if (!cpy)
		return (NULL);
	return (ft_memcpy(cpy, s + start, len));
}
