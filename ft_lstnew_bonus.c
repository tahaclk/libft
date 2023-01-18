/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:03:03 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/08 14:24:47 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodes;

	nodes = (t_list *)malloc(sizeof(t_list));
	if (!nodes)
		return (NULL);
	nodes -> content = content;
	nodes -> next = NULL;
	return (nodes);
}
/*
#include <stdio.h>
int main()
{
	int	i = 32;
	void *ptr;
	ptr = &i;
	printf("%d ", *((int	*)ft_lstnew(ptr)->content));
}
*/
