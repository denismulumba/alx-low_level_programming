#include <unistd.h>
int main(void)
{
	char str[] = "and that piece of art is useful\" - DOra Korpar, 2015-10-19\n";
	write(2, str, sizeof(str) -1);
	return 1;
}
