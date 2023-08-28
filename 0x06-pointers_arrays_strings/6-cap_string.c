#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * cap_string- A function that capitalizes all words of a string.
 *
 * @s: pointer that points to the string you want to perform the operation on
 * Return: the point to the string with words capitalized
 */

char *cap_string(char *s)
{
	int i = 0;
	bool new_word = true;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!'
				|| s[i] == '?' || s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{' || s[i] == '}')
			new_word = true;
		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (new_word)
			{
				/* Capitalize the letter */
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - ('a' - 'A'); /* Convert to uppercase */

				/* Mark that this character is not the start of a new word */
				new_word = false;
			}
		}
		else
			/* Mark that this character is not the start of a new word */
			new_word = false;
		i++;
	}

	return (s);
}
