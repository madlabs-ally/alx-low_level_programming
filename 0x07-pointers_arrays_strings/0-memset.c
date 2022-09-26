#include "main.h" 

/**
 * _memset - a function that fills memory with constant bytes
 * @s: location to fill
 * @c: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
     while (n)
     {
        s[n - 1] = b;
        n--;
     }
     return(s);
}
