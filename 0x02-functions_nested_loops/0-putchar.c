#include "main.h"
/**
 * Main - print _putchar
 *
 *Return 0 - Success
*/
int main()
{
	char str[] = {"_", "p", "u", "t", "c", "h", "a", "r"};
	int i = 0;

	while(i < strlen(str))
	{
		_putchar(str[i]);
	}

	return 0;
}
