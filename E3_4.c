#include <stdio.h>

int main()
{
	double a, b;
	char op;
	scanf("%lf%c%lf", &a, &op, &b);

	switch (op)
	{
	case '+':
		printf("%.2lf", a + b);
		break;

	case '-':
		printf("%.2lf", a - b);
		break;

	case '*':
		printf("%.2lf", a * b);
		break;

	case '/':
		if (b == 0)
		{
			printf("error");
		}else
		{
			printf("%.2lf", a / b);
		}
		break;
	
	default:
		break;
	}

	return 0;
}