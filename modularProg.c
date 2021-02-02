#include "calculations.h"

int main(void)
{
    int num;
    printf("Enter a factorial number: ");
    scanf("%d", &num);

	printFactorial(num);

	return 0;
}