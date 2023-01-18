/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:57:04 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/08 14:36:48 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (p == NULL)
		return (p);
	ft_bzero(p, size * count);
	return (p);
}
/*
#include <stdio.h>
int main()
{
	int *ip, id;

    ip = (int *) ft_calloc(10, sizeof(int));

    for (id=0; id<10; id++) {
         *(ip+id) = (id+1) * 5;
         printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    free(ip);
}
*/
