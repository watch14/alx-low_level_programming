#include "main.h"




char *string_toupper(char *str)
{	
	int i;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		str[i] = touppre(str[i]);
	}
	return (str);
}
