/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:00:01 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/09 16:14:24 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ascii_up(unsigned int a, char *b)
{
	b[a] += 1;
}

#include<stdio.h>
int main()
{
	char taha[] = "abcdefg";
	ft_striteri(taha, *ascii_up);
	printf("%s\n", taha);
}
*/
