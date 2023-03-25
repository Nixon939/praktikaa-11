#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
	int x = 0;
	printf ("argc: %d\n", argc);
	for (int i=0; i<argc; i++) {
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	x = atoi(argv[1]);
	printf ("x: %d\n", x);
	return 0;
}
