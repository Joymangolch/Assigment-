#include<stdio.h>
int main()
{
	double num1,num2,product;

	printf("Enter the desirable number : ");
	scanf("%lf",&num1);
	printf("Enter the desirable number : ");
	scanf("%lf",&num2);

	product = num1 * num2;

	printf("The product of two number is : %.2lf",product);

	return 0;

}

