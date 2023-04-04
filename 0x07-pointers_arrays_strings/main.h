#ifndef MAIN_H
#define MAIN_H

/* Included libraries */
#include <stdio.h>
#include <stdlib.h>


#include <stddef.h>

char *_memset(char *s, char b, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);



#endif /* MAIN_H */
