#include<stdio.h>
int main()
{
	char op;
	double a,b;

	printf("Enter the operator (+),(-),(*),(/) :  ");
	scanf("%c",&op);
	printf("Enter the desirable number : ");
	scanf("%lf",&a);
	printf("Enter the desirable number : ");
        scanf("%lf",&b);

	switch(op)
	{
		case'+';
		printf("%lf + %lf = %lf",a,b,a+b);
		break;
		
		case'-';
		printf("%lf - %lf = %lf",a,b,a-b);
		break;

		case'*';
	        printf("%lf * %lf = %lf",a,b,a*b);
                break;

		case'/';
		printf("%lf / %lf = %lf",a,b,a/b);
		break;

	}

	return 0;
}

