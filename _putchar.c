#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to be writen
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
