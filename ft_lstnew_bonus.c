/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahakam <ahakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:54:24 by ahakam            #+#    #+#             */
/*   Updated: 2021/11/20 01:08:05 by ahakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*htr;

	htr = malloc (sizeof(t_list));
	if (!htr)
		return (NULL);
	htr->next = NULL;
	htr->content = content;
	return (htr);
}
