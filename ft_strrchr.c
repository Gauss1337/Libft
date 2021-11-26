/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 19:19:19 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/14 21:51:38 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	l;

	str = (char *)s;
	l = ft_strlen(str);
	while (l && str[l] != c)
		l--;
	if (str[l] == (char)c)
		return (str + l);
	return (NULL);
}
