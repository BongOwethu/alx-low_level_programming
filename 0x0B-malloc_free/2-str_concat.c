#include"main.h"
#include<stdlib.h>
/**
* str_concat - Gets the ends of an input then adds size together
* @s1: First input to concatinate
* @s2: Second input to concatatinate
* Return: Concatinated string
*/
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, ci;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

	i = ci = 0;

while (s1[i] != '\0')
	i++;
while (s2[ci] != '\0')
	ci++;
conct = malloc(sizeof(char) * (i + ci + 1));

if (conct == NULL)
	return (NULL);
i = ci = 0;

while (s1[i] != '\0')
{
	conct[i] = s1[i];
	i++;
}

while (s2[ci] != '\0')
{
	conct[i] = s2[ci];
	i++, ci++;
}
conct[i] = '\0';
return (conct);
}
