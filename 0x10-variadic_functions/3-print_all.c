#include "variadic_functions.h"
/**
 *print_all - Function to print anything
 *@format: format to print case
 *
 *Return: print anything and separator
 */
void print_all(const char * const format, ...)
{
	int i, j;
	double f;
	char *s;

	va_list print_all;

	va_start(print_all, format);

	j = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(print_all, int));
					break;
			case 'i':
				i = va_arg(print_all, int);
					printf("%d", i);
					break;
			case 'f':
				f = va_arg(print_all, double);
					printf("%f", f);
					break;
			case 's':
				s = va_arg(print_all, char*);
				if (s == NULL)
					s = "(nil)";
					printf("%s", s);
					break;
			default:
				break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 's' ||
			format[j] == 'f') && (format[j + 1] != '\0'))
			printf(", ");
	j++;
	}
	printf("\n");
	va_end(print_all);
}
