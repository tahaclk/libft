/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:51:42 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/11 17:05:56 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*pt_src;

	pt_src = (char *)src;
	i = 0;
	while (i < dstsize && *dst)
	{
		dst++;
		i++;
	}
	if (i == dstsize)
		return (i + ft_strlen(src));
	j = 0;
	while (pt_src[j])
	{
		if (j < dstsize - i - 1)
			*dst++ = pt_src[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char d[] = "burak";
	char f[] = "redstone";
	
	size_t x = strlcat(d,f,10);
	printf("%zu\n%s",x,d);
}*/
