/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:52:42 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/14 21:07:34 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*str;
	size_t		i;

	if (!dst && !src)
		return (NULL);
	dest = dst;
	str = src;
	i = 0;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	while (len > 0)
	{
		len--;
		dest[len] = str[len];
	}
	return (dst);
}
