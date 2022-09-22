#include <stdio.h>

void CalculateBonus(int *salary, int bonus)
{
    *salary = *salary+bonus;
}

int main(int argc, char *argv[]) {
    int sa=15000;
    int bo=1000;

    CalculateBonus(&sa, bo);
    printf("Salary: %d", sa);
	
    return 0;
}


