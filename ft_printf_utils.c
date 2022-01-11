/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:02:56 by ahazim            #+#    #+#             */
/*   Updated: 2022/01/11 16:39:17 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	put_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	put_str(char *s)
{
	int	count;

	count = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[count] != '\0')
	{
		write (1, &s[count], 1);
		count++;
	}
	return (count);
}

// long long	ft_count_len(long long num, int base)
// {
// 	int	count;

// 	count = 0;
// 	if (num <= 0)
// 		count++;
// 	while (num)
// 	{
// 		num = num / base;
// 		count++;
// 	}
// 	return (count);
// }

int	ft_putnbr(int num)
{
	long long	nb;
	int			count;

	nb = num;
	count = 0;
	if (nb == -2147483648)
	{
		return (write (1, "-2147483648", 11));
	}
	if (nb < 0)
	{
		count++;
		put_char('-');
		nb = nb * -1;
	}
	if (nb <= 9)
		count += put_char(nb + '0');
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	return (count );
}

int	ft_putunnb(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb <= 9)
	{
		count += put_char(nb + '0');
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	return (count);
}
