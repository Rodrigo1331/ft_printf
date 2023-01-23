/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:43:23 by rcruz-an          #+#    #+#             */
/*   Updated: 2023/01/23 16:25:22 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	variables_printf(const char *s, int i, va_list arg_p)
{
	if (s[i] == %)
		return (ft_putchar('%'));
	if else (s[i] == 'c')
		return (ft_putchar(va_arg(arg_p, int)));
	if else (s[i] == 's')
		return (ft_putstr(va_arg(arg_p, char *)));
	/* if else (s[i] == 'p')
		return (); */
	if else (s[i] == 'i' || s[i] == 'd')
		return (ft_putnbr(va_arg(arg_p, int)));
	if else (s[i] == 'u')
		return (ft_putnbr_u(va_arg(arg_p, unsigned int)));
	if else (s[i] == 'x' || s[i] == 'X')
		return (ft_hex_base(va_arg(arg_p, unsigned int), s[i]));
	else
		return (0);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg_p;
	int		i;
	int		l;

	i = 1;
	l = 0;
	va_start(arg_p, s);
	while (s[i])
	{
		if (s[i] == '%' && ft_strchr("cspdiuxX%", s[i + 1]))
		{
			i++;
			l += variables_printf(s, i, arg_p);
		}
		else
			l += ft_putchar(s[i]);
		i++;
	}
	va_end (arg_p);
	return (l);
}

/* int main (){
	//int i = 23;

	printf("%d\n", printf("potato\n"));
	printf("%d\n", ft_printf("potato\n"));

	
	return (0);
} */