
#include "ft_printf.h"

int	variables_printf(const char *s, int i, va_list arg_p)
{
	if (s[i] == '%')
		return (ft_putchar('%'));
	else if (s[i] == 'c')
		return (ft_putchar(va_arg(arg_p, int)));
	else if (s[i] == 's')
		return (ft_putstr(va_arg(arg_p, char *)));
	else if (s[i] == 'p')
		return (ft_putpointer(va_arg(arg_p, unsigned long long)));
	else if (s[i] == 'i' || s[i] == 'd')
		return (ft_putnbr(va_arg(arg_p, int)));
	else if (s[i] == 'u')
		return (ft_putnbr_u(va_arg(arg_p, unsigned int)));
	else if (s[i] == 'x')
		return (ft_hex_base(va_arg(arg_p, unsigned int)));
	else if (s[i] == 'X')
		return (ft_hex_base_uppercase(va_arg(arg_p, unsigned int)));
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

	va_start(arg_p, s);
	i = 0;
	l = 0;
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