#include <stdio.h>

int main(int argc, char *argv[]) {	
	int num1 = 100;
	int num2 = 200;
	int *p1, *p2;
	
	p1 = &num1;
 	p2= &num2;

    	printf("Address of (&) and Value at (*)\n"); 
	printf("-------------------------------\n");
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
	printf("-------------------------------\n");
	printf("& Operator\n"); 	   
	printf ("Address of num1 = %p\n", &num1);
	printf ("Address of num2 = %p\n", &num2);
	printf("-------------------------------\n");
	printf("& and * Operator\n"); 
	printf("-------------------------------\n"); 
	printf ("Value of num1 = %d\n",*(&num1));
	printf ( "Value of num2 = %d",*(&num2));
	
	return 0;
}


