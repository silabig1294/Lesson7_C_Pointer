#include <stdio.h>

int main(int argc, char *argv[]) {
	int data = 100;
	int *p = NULL;

	p = &data; 
	*p = 5000; 
	printf("Data : %d\n", *p);

	data = data + 1;
	printf("*p : %d", data);
		
	return 0;
}


