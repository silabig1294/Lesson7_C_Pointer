#include <stdio.h>

int main(int argc, char *argv[]) {
	char str[100];	
   
   	printf("Input string : ");
   	fgets(str, sizeof str, stdin);
   
   	int length = StringLength(str);
   	printf("Length : %d ", length-1);
	
	return 0;
}

int StringLength(char* ch)
{
   int count=0;
   while (*ch != '\0') 
   {
      count++;
      ch++;
   }
   
   return count;
}


