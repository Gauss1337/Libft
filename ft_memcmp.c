/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:22:02 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/16 22:27:46 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*htr;

	str = (unsigned char *)s1;
	htr = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != htr[i])
			return ((str[i] - htr[i]));
		i++;
	}
	return (0);
}
