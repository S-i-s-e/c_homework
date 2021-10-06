#include <stdio.h>
#define PI 3.1415926
#define DENSITY 11340

int main()
{
	double d1;
	double d2;
	scanf("%lf%lf", &d1, &d2);
	d1 = 0.01 * d1;
	d2 = 0.01 * d2;
	double r1 = 0.5 * d1;
	double r2 = 0.5 * d2;

	double weight1;
	double weight2;
	//注意：4 / 3 结果为1
	weight1 = (4.0 / 3) * PI * r1 * r1 * r1 * DENSITY;
	weight2 = (4.0 / 3) * PI * r2 * r2 * r2 * DENSITY;


	printf("%lf", weight1 - weight2);

	return 0;
}