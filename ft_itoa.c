/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:39:52 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/12 15:28:47 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long int n)
{
	long int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			l;
	long int	tmp;

	tmp = n;
	l = digit_counter(tmp);
	str = (char *)malloc(l + 1);
	if (!str)
		return (NULL);
	str[l] = '\0';
	if (tmp < 0)
	{
		str[0] = '-';
		tmp = tmp * -1;
	}
	if (tmp == 0)
		str[0] = '0';
	while (tmp > 0)
	{
		str[--l] = (tmp % 10) + 48;
		tmp /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-2147483648));
}
*/
