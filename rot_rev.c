#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * printrot13 - encodes string to rot13
 * @list: argument type list
 *
 * Return: length of sentence
 */
int printrot13(va_list list)
{
	int i, j;
	char *s, *ns;
	int count = 0;

	char lower[27] = "abcdefghijklmABCDEFGHIJKLM";
	char upper[27] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	s = va_arg(a, char *);
	i = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	ns = malloc(sizeof(char) * (count + 1));

	if (ns == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		ns[i] = s[i];
		i++;
	}

	for (i = 0; ns[i] != '\0'; i++)
		for (j = 0; j < 26; j++)
		{
			if (ns[i] == lower[j])
			{
				ns[i] += 13;
			}
			else if (ns[i] == upper[j])
				ns[i] -= 13;
		}
	for (i = 0; ns[i] != '\0'; i++)
		print(ns[i]);
	free(ns);
	return (i);
}
/**
  * revstring - prints unsigned ints to binary
  * @list: argument type
  *
  * Return: length
  */
int revstring(va_list list)
{
	char *s;
	int i;
	int count;

	i = 0;
	count = 0;

	s = va_arg(a, char *);

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	i--;
	while (i >= 0)
	{
		print(s[i]);
		i--;
	}
	return (count);
}
