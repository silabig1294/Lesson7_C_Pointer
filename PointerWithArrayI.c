#include <stdio.h>

int main(int argc, char *argv[]) {
	int data[] = {10, 20};

	printf("Address : %p\n", data);
	printf("Index Address : %p\n", &data[0]);
	printf("Index Address : %p", &data[1]);
	
	return 0;
}


