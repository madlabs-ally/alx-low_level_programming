#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
 *void prototypes()
 *int prototypes()
 *char prototypes()
 */

void reverse_array(int *b, int m);
void print_number(int m);
void print_buffer(char *c, int size);
int _strcmp(char *t1, char *t2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int m);
char *_strncpy(char *dest, char *src, int m);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *m1, char *m2, char *s, int size_s);
char *add_strings(char *m1, char *m2, char *s, int s_index);

#endif /*MAIN_H*/
