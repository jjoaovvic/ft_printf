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
