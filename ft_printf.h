/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:10:13 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/11/19 20:47:20 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

# define UPP_HEX_BASE "0123456789ABCDEF"
# define HEX_BASE "0123456789abcdef"

int		ft_printf(const char *format, ...);
int		ft_putchar_pf(char c, int *char_count);
int		ft_putstr_pf(char *str, int *char_count);
int		ft_putnbr_pf(int nbr, int *char_count);
int		ft_unsigned_int_pf(unsigned int u, int *char_count);
int		ft_pointer_pf(size_t ptr, int *char_count);
int		ft_hexadecimal_pf(unsigned int nbr, int *char_count, char x_type);

#endif
