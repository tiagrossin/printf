/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_text.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:36:38 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/11/21 20:09:03 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c, int *char_count)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	(*char_count)++;
	return (0);
}

int	ft_putstr_pf(char *str, int *char_count)
{
	size_t	i;

	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		(*char_count) += 6;
		return (0);
	}
	i = 0;
	while (str[i])
	{
		if (ft_putchar_pf(str[i], char_count) == -1)
			return (-1);
		i++;
	}
	return (0);
}
