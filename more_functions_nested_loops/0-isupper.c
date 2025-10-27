#include <stdio.h>

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'a' && c >= 'z')
	{
		return (0);
	}

	return (0);
}