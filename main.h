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
	void (*f)(va_list, int*);
} idp;

int _printf(const char *format, ...);
void id_char(va_list inprif, int *len);
void id_str(va_list inprif, int *len);
#endif
