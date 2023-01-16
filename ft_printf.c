/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:43:23 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/01/16 15:13:59 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	variables_printf(const char *s, int i, va_list arp)
{
	if (s[i + 1] == %)
		return (ft_putchar_fd('%', 1));
	if else (s[i + 1] == 'c')
		return (ft_putchar_fd(va_arg(arp, int), 1));
	if else (s[i + 1] == 's')
		return (ft_putstr_fd (va_arg(arp, char *), 1));
	if else (s[i + 1] == 'p')
		return ();
	if else (s[i + 1] == 'd')
		return ();
	if else (s[i + 1] == 'i')
		return ();
	if else (s[i + 1] == 'u')
		return ();
	if else (s[i + 1] == 'x' || s[i + 1] == 'X')
		return ();
	else
		return (0);
}

int ft_printf(const char *s, ...)
{
	va_list arg_p;
	int i;

	va_start(arg_p, s);
	i = 1;



	va_end (arg_p);
	return ();
}

/* int main ()
{
	
	
	printf ("%c\n", c);
	return (0);
} */

/*
while (...)
{
	ft_strchr can be used or not

	
		if (s[i] = %)
			variable_printf
		else
			ft_putchar_fd
		i++;
}
*/