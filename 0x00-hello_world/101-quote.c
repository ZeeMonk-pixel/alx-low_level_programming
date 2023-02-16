#include <unistd.h>
/**
 * main(void)- prints message to standard error,
 * writesmessage to standard error
 * Return: returns 1
 */
int main(void)
{
	char msg[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof(msg) - 1);
	return (1);
}
