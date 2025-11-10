#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *str_concat;
    int i, j, len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    str_concat = malloc(sizeof(char) * (len1 + len2 + 1));
    if (str_concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        str_concat[i] = s1[i];

    for (j = 0; j < len2; j++)
        str_concat[i + j] = s2[j];

    str_concat[i + j] = '\0';

    return (str_concat);
}
