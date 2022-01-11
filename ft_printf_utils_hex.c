/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 21:35:51 by ahazim            #+#    #+#             */
/*   Updated: 2022/01/11 15:28:50 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	lowerexa(unsigned int num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (num <= 15)
	{
		put_char(base[num]);
		count++;
	}
	else
	{
		count += lowerexa(num / 16);
		count += lowerexa(num % 16);
	}
	return (num);
}

int	upperexa(unsigned int num)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789ABCDEF";
	if (num <= 15)
	{
		put_char(base[num]);
		count++;
	}
	else
	{
		count += upperexa(num / 16);
		count += upperexa(num % 16);
	}
	return (num);
}
