#include <stdio.h>

int main(int argc, char *argv[]) {
	int data;
	int *p = &data; 

	printf ("Enter Your number : ");
	scanf("%d", p);

	printf("Variable : %d\n", data);
	printf("*p : %d\n", *p);
	
	return 0;
}


