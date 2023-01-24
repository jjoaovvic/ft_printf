/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaovict <joaovict@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:46:37 by joaovict          #+#    #+#             */
/*   Updated: 2022/09/05 18:50:25 by joaovict         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printchar(int c);
int		ft_printhex(unsigned long n, char c);
void	ft_realprinterhex(unsigned long int n, char c);
int		ft_printstr(char *s);
int		ft_printpnt(unsigned long int n);
int		ft_printnbr(int n);
int		ft_printunsg(unsigned int n);

#endif