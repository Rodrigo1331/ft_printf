/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:43:23 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/01/19 16:56:19 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	variables_printf(const char *s, int i, va_list arp)
{
	if (s[i] == %)
		return (ft_putchar ('%'));
	if else (s[i] == 'c')
		return (ft_putchar (va_arg(arp, int)));
	if else (s[i] == 's')
		return (ft_putstr (va_arg(arp, char *)));
	if else (s[i] == 'p')
		return (); //I don't know yet
	if else (s[i] == 'i' || s[i] == 'd')
		return (ft_putnbr (va_arg(arp, int)));
	if else (s[i] == 'u')
		return (ft_putnbr_u (va_arg(arp, unsigned int)));
	if else (s[i] == 'x')
		return (); //libft (probably)
	if else (s[i] == 'X')
		return (); // x but uppercase formate
	else
		return (0);
}

int ft_printf(const char *s, ...)
{
	va_list arg_p;
	int i;
	int r;

	i = 1;
	r = 0;
	va_start(arg_p, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			i++;
			r += variable_printf(*s, i, arg_p);
		}
		else
			r += ft_putchar(s[i]);
		i++;
	}
	va_end (arg_p);
	return (r);
}

/* int main ()
{
	int i = 23;

	printf("%d\n", printf("potato\n"));
	printf("%d\n", ft_printf("potato\n", 10));
	return (0);
} */