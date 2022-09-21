#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 *
 * @dest: pointer to des input
 * @src: pointer to src input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{

	int e, e2;

	/*find the size of dest array*/
	while (dest[e]){
		e++;
          }
	/* iterate through each src array value without the null byte*/
	for (e2 = 0; src[e2] ; e2++){

		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[e++] = src[e2];
        }
       
	return (dest);
}
