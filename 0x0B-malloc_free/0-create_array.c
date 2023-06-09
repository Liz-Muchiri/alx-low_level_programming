#include "main.h"

/**
  * create array - create array of chars, and initializes with specific char
  * @size: the size of an array
  * @c: the char to assign
  * Description: creates an array size and assign char
  * Return: pointer to the array, else NULL
  *
  */

char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
