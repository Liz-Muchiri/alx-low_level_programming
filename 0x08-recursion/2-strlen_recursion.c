#include "main.h"

/**
  * int _strlen_recursion - returns the length of a string
  * @s: the string to measure
  *
  *Return: length of a string
  */
int _strlen_recursion(char *s);

{
	int longit = 0;

	if (*s)
	{
		longit++
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

