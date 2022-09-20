#include "main.h"
/**
*rev_string - Reverse a string
*@s: String to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
int i = 0, len_gth;
len_gth = _strlen(s) - 1;
while (len_gth > i)
{
swap_char(s + len_gth, s + i);
i++;
len_gth--;
}
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}

/**
*swap_char - swap two characters
*@a: first character
*@b: second character
*Return: nothing
*/

void swap_char(char *a, char *b)
{
char tmp = *a;
*a = *b;
*b = tmp;
}
