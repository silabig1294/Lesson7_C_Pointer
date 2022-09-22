#include <stdio.h>

int main(int argc, char *argv[]) {
	int *p1 = NULL;
	int *p2 = NULL;
	int data = 1000;

	p1 = &data;
	p2 = &data;
	
	*p1 = *p1+1;
	*p2 = *p2+2;

	printf("Data : %d", data);
	
	return 0;
}


