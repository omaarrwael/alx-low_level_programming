#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i = 0, j = 0, len1 = 0, len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
{
return (NULL);
}
while (i < len1)
{
concat[i] = s1[i];
i++;
}
while (j < len2)
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0';
return (concat);
}
