#include "main.h"
#include <unistd.h>
/**
 * _putchar - writing the character for c to stdout
 * @c: The Character to print the value
 * Return: is always on success 1.
 * On error, -1 is return and erno is set for appropriately.*/
int _putchar(char c){
	return (write(1,&c,1));
}

