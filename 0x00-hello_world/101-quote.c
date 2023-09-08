#include <unistd.h>
/**
 * main - application start
 *
 * Description: Prints text without usin printf or puts
 *
 * Return: 0 (Successfully)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
