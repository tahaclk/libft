/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:59:40 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/11 16:33:24 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		neg;
	int		i;

	num = 0;
	neg = 1;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		num *= 10;
		num += str[i] - 48;
		if (num * neg < -2147483648)
			return (0);
		if (num * neg > 2147483647)
			return (-1);
		i++;
	}
	return ((int)num * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char text[] = " 	\n\r\v\f\t         2147483648,232asd";
    printf("orj:%d\n",atoi(text));
    printf("rep:%d\n",ft_atoi(text));
}
*/
