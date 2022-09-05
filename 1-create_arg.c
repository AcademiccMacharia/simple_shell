#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	for (i = 0; i<=ac; i++)
		printf("The number of arguments: %s\n", av[i]);
	return 0;
}	
