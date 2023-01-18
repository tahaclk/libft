/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:08:40 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/11 13:58:58 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		x;

	i = 0;
	x = 0;
	while (s[i])
		i++;
	while (i >= 0 && x == 0)
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		if (i == 0)
			x = 1;
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char test = 'a';
    const char metin[] = "sadflkjsflhjbsdajln";
    printf("orj:%s\n", strrchr(metin,(int)test));
    printf("rep:%s\n", ft_strrchr(metin,(int)test));
}
*/
