/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:23:57 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/12 15:24:00 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*src_tmp;
	unsigned char	*dst_tmp;
	size_t			i;

	i = 0;
	src_tmp = (unsigned char *)src;
	dst_tmp = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		i++;
	}
	return (dst);
}
/*
#include<stdio.h>
int main()
{
	char src[50] = "http://www.tutorialspoint.com";
	printf("%s",ft_memcpy(src,src+4,4));
}
*/
