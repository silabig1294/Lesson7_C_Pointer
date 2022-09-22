#include <stdio.h>

int main(int argc, char *argv[]) {
	int data[] = {100, 200, 400, 800, 1200};
	int *p1, *p2;

	p1 = &data[0]; 
	p2 = &data[1];

	printf("1st : %d\n", *p1);
	printf("2nd : %d", *p2);
	
	return 0;
}


