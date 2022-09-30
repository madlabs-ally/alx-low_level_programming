#include <unistd.h>

/**
* _putchar - writes the character to c 
* @c - the character to print 
*
* Return: On success print 1 
* On error, -1 is returned.
*/

int _putchar(char c)

{
     return (write (1, &c, 1));
}
