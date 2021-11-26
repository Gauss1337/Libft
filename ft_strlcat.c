/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:52:46 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/14 21:34:12 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	k = ft_strlen(src);
	while (dst[i] != '\0' && dstsize)
	{
		i++;
		dstsize--;
	}
	while (src[j] && dstsize > 1)
	{
		dst[i + j] = src[j];
		j++;
		dstsize--;
	}
	if (dstsize != 0)
		dst[i + j] = '\0';
	return (k + i);
}
