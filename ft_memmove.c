/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:29:32 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/12 11:37:01 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dstt;
	unsigned char		*srcc;

	dstt = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			*(dstt + len) = *(srcc + len);
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
/*
#include<stdio.h>
#include <string.h>
int main()
{
	char dizi[] = "merhaba";
	printf("orj:%s\n", memmove(dizi+2, dizi, 3));
	printf("rep:%s\n", ft_memmove(dizi+2, dizi, 3));
}
*/
