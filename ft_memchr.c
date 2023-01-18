/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 14:38:48 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/11 13:50:05 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
    const char s1[] = "test kontrol ads";
    printf("%s",ft_memchr(s1,'s',10));
    return 0;
}
*/
