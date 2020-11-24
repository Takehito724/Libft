/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkoami <tkoami@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 14:15:47 by tkoami            #+#    #+#             */
/*   Updated: 2020/11/23 01:19:54 by tkoami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst_next;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		lst_next = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = lst_next;
	}
}
