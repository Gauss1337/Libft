/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 01:12:44 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/20 00:56:33 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trimappend(char const *s1, char *str, int start, int end)
{
	int	i;

	i = 0;
	while (start < (end + 1))
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static int	find_first_index(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	end = ft_strlen(s1);
	start = 0;
	while (start < end)
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	start = find_first_index(s1, set);
	while (s1[end] != s1[start])
	{
		if (!ft_strchr(set, s1[end]))
			break ;
		end--;
	}
	str = malloc(sizeof(char) * ((end - start) + 2));
	if (!str)
		return (NULL);
	return (ft_trimappend(s1, str, start, end));
}
