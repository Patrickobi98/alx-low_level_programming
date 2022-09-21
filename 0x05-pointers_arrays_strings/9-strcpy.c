#include "main.h"

/**
 * _strcpy - copies string variables
 * @dest: This is the destination
 * @src: This is the source copier
 *
 * Return: This returns copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
