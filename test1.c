#include <stdio.h>
#define ARRAY_SIZE 1000000
int main () {
	printf ("ARRAY_SIZE: %d\n", ARRAY_SIZE);
	char v[ARRAY_SIZE];
	for (int i=0; i<ARRAY_SIZE; i++) {
	v[i]=i;
	}
	for (int i=0; i<ARRAY_SIZE; i++) {
		printf ("%5d", v[i]);
	}
	return 0;
}
