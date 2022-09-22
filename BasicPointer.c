#include <stdio.h>

int main(int argc, char *argv[]) {	
	int salary=25000;
	int *p=&salary;
	
	printf("p is address of salary  = %p\n", p);
	printf("*p is the value of salary = %i", *p);
	
	return 0;
}


