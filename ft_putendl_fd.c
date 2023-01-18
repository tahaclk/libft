/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcelik <tcelik@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:14:35 by tcelik            #+#    #+#             */
/*   Updated: 2022/10/09 19:50:21 by tcelik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	if (s)
		ft_putchar_fd('\n', fd);
}
/*
int	main()
{
	char text[] = "test metni";
	ft_putendl_fd(text, 3);
	ft_putendl_fd(text, 3);
}
*/
