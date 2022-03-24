#ifndef _HEADER_
#define _HEADER_
#include <unistd.h>
#include <stdarg.h>
/**
 * struct typ - struct to get type
 * @id: type
 * @f: function
 */
typedef struct typ
{
	char *id;
	int (*f)(va_list);
} idp;

int _printf(const char *format, ...);
int id_char(va_list inprif);
int id_str(va_list inprif);
int id_int(va_list inprif);
int id_per(va_list inprif);
#endif
