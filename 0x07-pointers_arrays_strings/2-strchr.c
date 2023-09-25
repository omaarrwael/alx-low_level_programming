#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to be located
 * Return: pointer to the first occurrence of c in s, or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}