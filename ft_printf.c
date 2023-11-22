#include "ft_printft.h"
static  int for_norminette(const char *s)
{
    int i;

    i = 0;
    i += ft_putchar('%');
    i += ft_putchar(*s);
    return (i);
}
int ft_printf(const char *format, ...)
{
    int count;
    va_list arg_p;

    if (!format)
        return (-1);
    count = 0;
    va_start(arg_p,format);
    while (*format)
    {
        if (*format == '%')
        {
            if (*(format + 1) == '\0')
                return (-1);
            format++;
            if (ft_strchr("cspdiuxX%", *format))
                count += ft_print_type(*format, arg_p);
            else
                count += for_norminette(format);
        }
        else
            count += ft_putchar(*format);
    format++;
    }
    va_end(arg_p);
    return (count);
}