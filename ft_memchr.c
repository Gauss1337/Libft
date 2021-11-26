/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:35:23 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/19 01:13:30 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	cd;

	cd = c;
	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if (str[i] == cd)
			return (str + i);
		i++;
	}
	return (NULL);
}
