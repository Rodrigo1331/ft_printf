/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:48:33 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/01/19 16:25:18 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int ft_printf(const char *, ...);
int	variables_printf(char *s, );

void	ft_putstr(char *s);
void	ft_putchar(char c);
int		ft_putnbr(int n);
int		count_digit(int n);
char	*ft_strchr(const char *s, int c);
int		ft_putnbr_u(unsigned int n)

#endif