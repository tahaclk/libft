/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:50:51 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/11 16:24:58 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*sup;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		sup = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = sup;
	}
	*lst = NULL;
}
