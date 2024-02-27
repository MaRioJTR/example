#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Input 2 integer num : ");
	scanf_s("%d%d", &num1, &num2);
	if (num1 == num2)
		printf("Number1 and Number2 are equal");
	else
		printf("Number1 and Number2 are not equal");
	return 0;

}