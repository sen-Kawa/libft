/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaheinz <kaheinz@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 22:33:58 by kaheinz           #+#    #+#             */
/*   Updated: 2022/06/07 00:48:36 by kaheinz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*holder;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			holder = ft_lstlast(*lst);
			holder->next = new;
		}
	}
}
