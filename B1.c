#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int x;
	int y;
}coordinate, *pCoordinate;

int squareOfDistance(const pCoordinate citizen, const pCoordinate i)
{
	return (citizen->x - i->x) * (citizen->x - i->x) + (citizen->y - i->y) * (citizen->y - i->y);
}

void swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int n;
	coordinate citizen;
	scanf("%d%d%d", &n, &(citizen.x), &(citizen.y));

	pCoordinate a = (pCoordinate)malloc(sizeof(coordinate) * n);
	int i;
	for (i = 0; i < n; ++i)
	{
		scanf("%d%d", &(a[i].x), &(a[i].y));
	}

	int *sd = (int *)malloc(sizeof(int) * n);
	for (i = 0; i < n; ++i)
	{
		sd[i] = squareOfDistance(&citizen, &a[i]);
	}
	free(a);

	int temp[3] = {sd[0], sd[1], sd[2]};
	int res[3] = {1, 2, 3};
	if (temp[0] > temp[1])
	{
		swap(&res[0], &res[1]);
		swap(&temp[0], &temp[1]);
	}
	if (temp[1] > temp[2])
	{
		swap(&res[1], &res[2]);
		swap(&temp[1], &temp[2]);
	}
	if (temp[0] > temp[1])
	{
		swap(&res[0], &res[1]);
		swap(&temp[0], &temp[1]);
	}
	for (i = 3; i < n; ++i)
	{
		if (sd[i] < temp[2])
		{
			temp[2] = sd[i];
			res[2] = i + 1;
			if (temp[1] > temp[2])
			{
				swap(&res[1], &res[2]);
				swap(&temp[1], &temp[2]);
			}
			if (temp[0] > temp[1])
			{
				swap(&res[0], &res[1]);
				swap(&temp[0], &temp[1]);
			}
		}
	}
	free(sd);

	printf("%d\n%d\n%d\n", res[0], res[1], res[2]);

	return 0;
}