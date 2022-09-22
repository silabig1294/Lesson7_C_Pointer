#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	int data[5] = {100, 200, 300, 400, 500};
	for (i=0;i<5;i++)
   	{
		printf("Value is %d Address is %p\n", data[i], data[i]);
   	}
	
	return 0;
}


