/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazim <ahazim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 16:36:01 by ahazim            #+#    #+#             */
/*   Updated: 2022/01/11 14:54:48 by ahazim           ###   ########.fr       */
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
int	lowerexa(unsigned int num);
int	upperexa(unsigned int num);

#endif