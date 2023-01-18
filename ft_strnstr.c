/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:06:47 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/11 18:52:36 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	if (!haystack && len == 0)
		return (NULL);
	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0'
			&& hay[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char *ptr = ft_strnstr(haystack,needle,8);
	size_t t = -1;
	printf("%li\n", t);
	printf("%s\n",ptr);
	printf("%s\n",ft_strnstr(haystack, needle, -1)); haystack + 1
	printf("%s\n",ft_strnstr(haystack, "a", -1)); haystack
	printf("%s\n",ft_strnstr(haystack, "c", 10)); haystack + 4
}*/
