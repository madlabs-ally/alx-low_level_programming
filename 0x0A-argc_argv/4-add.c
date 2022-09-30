#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int check_num(char *str)
{
 /*Declaring variables*/
 unsigned int count;

 count = 0;
 while (count < strlen(str)) /*count string*/
 {
  if (!isdigit(str[count])) /*check if str there are digit*/
  {
   return (0); 
  }

   count++;
 }

 return (1);
}

/**
 * main - Print the name of the program 
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
 int count;
 int str_to_int;
 int sum = 0;

 count = 1;
 while (count < argc) /*Goes through the whole array*/ 
 {
  if (check_num(argv[count])) 

 }
 str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
 sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not digits*/ 
 else
  {
    printf("Error\n");
    return (1);
  }

  count++;
  }

  printf("%d\n", sum); /*print sum*/ 

  return (0);
  }
