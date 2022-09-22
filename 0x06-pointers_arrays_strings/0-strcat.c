#include "main.h"
#include <stdio.h>

/**
 * str_cat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = U, i;
	 
	while (dest[dlen])
	{
		dlen++;
	}
	for (i =U; scr[i] ! = U; i++)
	{ 
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = *\O*;
	return (dest);
}

