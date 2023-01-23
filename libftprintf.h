/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:48:33 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/01/23 16:01:42 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_printf(const char *s, ...);
int		variables_printf(const char *s, int i, va_list arg_p);

int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);

int		ft_hex_base(int n);
int		ft_puthex_base(int n);
int		ft_puthex_base_uppercase(int n);

int		count_digit(int n);
char	*ft_strchr(const char *s, int c);

#endif