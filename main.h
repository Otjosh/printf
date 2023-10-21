#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(const char *s);
int _itoa(int num, char *str);
int _utoa_base(unsigned int num, char *str, int base);

#endif /* MAIN_H */
