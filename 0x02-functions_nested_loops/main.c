#include "main.h"
#include <unistd.h>

int _putchar (char a)
{
	return (write(1, &a, 1));
}
