#include <stdio.h>
// b = a++, a==1,b==0
//b =++a, a=1,b=1
int main(void)
{
	int num1 =12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("num2++: %d \n", ++num2);
	printf("num2: %d \n\n", num2);
	return 0;
}
