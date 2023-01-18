/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:03:07 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/09 18:07:48 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int main(){
	char d[] = "dayiasdfg";
    char d1[] ="dayiasdfg";
    
    char f[] = "cayira";
    char f1[] ="cayira";
    
    printf("\norj:\t\t%lu\n",strlcpy(d,f,3));
    printf("rep:\t\t%lu\n",ft_strlcpy(d1,f1,3));
	printf("\ndegisken:\t%s\ndegisken:\t%s\n\n",d,f);
    printf("\ndegisken1:\t%s\ndegisken1:\t%s\n\n",d,f);
}
*/
