#include<stdio.h>
int main()
{
	char op;
	double a,b;

	printf("Enter the desirable operator : (+),(-),(*),(/) : ");
	scanf("%c",&op);

	printf("Enter any integer : ");
	scanf("%lf",&a);
	printf("Enter any integer : ");
        scanf("%lf",&b);

	switch(op)
	{
		case '+':
			printf("%lf + %lf = %lf",a,b,a+b);
			break;
		case '-':
			printf("%lf - %lf = %lf",a,b,a-b);
			break;
		case '*':
			printf("%lf * %lf = %lf",a,b,a*b);
                        break;
		case '/':
			printf("%lf / %lf = %lf",a,b,a/b);
                        break;

	}
	return 0;

}
