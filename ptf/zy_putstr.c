/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zy_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enja <enja@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:57:52 by enja              #+#    #+#             */
/*   Updated: 2021/12/12 23:48:43 by enja             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	zy_putstr(char *str)
{
	int	idx;

	idx = 0;
	if (!str)
	{
		zy_putstr("(null)");
		return ;
	}
	while (*str)
		zy_putchar(*str++);
}
