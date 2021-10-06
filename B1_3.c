#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	printf("Entetr three different integers: %d %d %d\n", a, b, c);
	printf("Sum is %d\n", a + b + c);
	printf("Average is %d\n", (a + b + c) / 3);
	printf("Product is %d\n", a * b * c);

	int s, l;
	printf("Smallest is %d\n", (s = a < b ? a : b) < c ? s : c);
	printf("Largest is %d\n", (l = a > b ? a : b) > c ? l : c);

	return 0;
}