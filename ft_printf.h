/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:36:01 by ahazim            #+#    #+#             */
/*   Updated: 2022/01/11 17:07:24 by ahazim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<stdarg.h>

int	ft_printf(const char *print, ...);
int	put_char(char c);
int	put_str(char *s);
int	ft_putnbr(int num);
int	ft_putunnb(unsigned int nb);
int	lowerexa(unsigned long num);
int	upperexa(unsigned long num);
int	ft_lowerexa(unsigned int num);
int	ft_upperexa(unsigned int num);
int	ft_checker(char word, va_list list);

#endif