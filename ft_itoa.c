/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 20:03:35 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/20 00:56:14 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		i += 1;
	while (nb / 10)
	{
		i++;
		nb /= 10;
	}
	return (i + 1);
}

static char	*alloc(int nb)
{
	char	*str;

	str = malloc (sizeof(char) * (ft_count(nb)));
	return (str);
}

char	*ft_itoa(int nb)
{
	int				i;
	unsigned long	nbr;
	char			*str;

	nbr = nb;
	i = ft_count(nb) - 1;
	if (nb == 0)
		return (ft_strdup("0"));
	str = alloc(nb);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (i >= 0)
	{
		if (str[i] == '-')
			break ;
		str[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	str[ft_count(nb)] = '\0';
	return (str);
}
