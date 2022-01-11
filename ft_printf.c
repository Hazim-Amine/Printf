/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:34:58 by ahazim            #+#    #+#             */
/*   Updated: 2022/01/11 15:55:28 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_checker(char word, va_list list)
{
	int	index;

	index = 0;
	if (word == 'c')
		index += put_char(va_arg(list, int));
	else if (word == 's')
		index += put_str(va_arg(list, char *));
	else if (word == 'd' || word == 'i')
		index += ft_putnbr(va_arg(list, int));
	else if (word == 'u')
		index += ft_putunnb(va_arg(list, unsigned int));
	else if (word == 'x')
		index += lowerexa(va_arg(list, unsigned int));
	else if (word == 'X')
		index += upperexa(va_arg(list, unsigned int));
	else if (word == 'p')
	{
		index += put_str("0x");
		index += lowerexa(va_arg(list, unsigned long long));
	}
	else if (word == '%')
		index += put_char('%');
	return (index);
}

int	ft_printf(const char *print, ...)
{
	va_list	list;
	int		index;
	int		count;

	va_start(list, print);
	index = 0;
	count = 0;
	while (print[count])
	{
		if (print[count] != '%')
		{
			put_char(print[count]);
			index++;
		}
		if (print[count] == '%')
		{
			count++;
			while (print[count] == ' ' && print[count])
				count++;
			index += ft_checker(print[count], list);
		}
		index++;
	}
	va_end(list);
	return (index);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "amine hazim";
// 	ft_printf ("mine : %s", s);
// 	printf("yours : %s", s);
// }
