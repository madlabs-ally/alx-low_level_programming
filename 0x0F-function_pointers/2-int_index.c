#include "function_pointers.h"

/**
 * array_iterator - Executes a function as a parameter
 * on each element of an array
 *
 * @array: An array of paramters (values) to be passed to @action
 *
 * @size: Size/length of @array
 *
 * @action: Pointer to a function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i res;

    res = -1;
    if(array && cmp)
    {
           if (size <= 0)
           {
                    return (res);
           }
           for (i = 0; i < size; i++)
           {
                  cmp(array[i]);
                  if (cmp(array[i]) > 0)
                  {
                     res = i;
                     break;
                  }
                  if ((cmp(array[i]) == (-1)))
                  {
                     return(res);
                  }
           }
    }
    return(res);
}
