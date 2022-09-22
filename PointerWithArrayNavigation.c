#include <stdio.h>

int main(int argc, char *argv[]) {
	int data[] = {100, 200, 400, 800, 1200};
	int *p;                

	p = &data[0];

	printf("%d\n", *p);
	p++;       
	printf("%d\n", *p);
	p++; 
	printf("%d\n", *p); 
	
	return 0;
}


