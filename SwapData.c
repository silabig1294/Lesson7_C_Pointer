#include <stdio.h>

void SwapData(int *num1, int *num2)
{
	int data; 

	data = *num1; 
	*num1 = *num2;  
	*num2 = data;    
}

int main(int argc, char *argv[]) {
	int x = 1000;
	int y = 2000;	

	printf("-------Original Data-----------\n");
	printf("x is %d\n", x);
	printf("y is %d\n", y);
	printf("-------After Swap Data-----------\n");
	SwapData(&x, &y);
	printf("x is %d\n", x);
	printf("y is %d", y);
	
	return 0;
}


