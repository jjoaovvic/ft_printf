#include "ft_printf.h"

int	ft_printpnt(unsigned long int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{	
		len = 5;
		write(1, "(nil)", 5);
	}
	else
	{
		len = 2;
		write(1, "0x", 2);
		ft_realprinterhex(n, 'x');
		while (n > 0)
		{
			n = n / 16;
			len++;
		}
	}
	return (len);
}
