/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:46:59 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/11 15:28:52 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	x;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && is_in_set(s1[i], set))
			i++;
	while (j >= i && is_in_set(s1[j - 1], set))
			j--;
	trimmed = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!trimmed)
		return (NULL);
	x = 0;
	while (i < j)
		trimmed[x++] = s1[i++];
	trimmed[x] = '\0';
	return (trimmed);
}
