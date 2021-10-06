#include <stdio.h>

#define N 5

void insert(int *a, int n)
{
	int flag = 0;
	int i;
	//判断是从大到小还是从小到大
	for (i = 0; i < N - 2; ++i)
	{
		if (a[i] > a[i + 1])
		{
			flag = 1;
			break;
		}else if (a[i] < a[i + 1])
		{
			flag = -1;
			break; 
		}
	}

	// 根据flag找到应该插入的位置
	if (flag < 1)
	{
		for (i = 0; i < N - 1; ++i)
		{
			if (n <= a[i])
			{
				break;
			}
		}
	}else
	{
		for (i = 0; i < N - 1; ++i)
		{
			if (n >= a[i])
			{
				break;
			}
		}
	}

	int temp;
	while (i < N)
	{
		temp = a[i];
		a[i] = n;
		n = temp;
		++i;
	}
}

int main()
{
	int a[N];
	int n;
	for (int i = 0; i < N - 1; ++i)
	{
		scanf("%d", a + i);
	}
	scanf("%d", &n);

	insert(a, n);

	for (int j = 0; j < N; ++j)
	{
		printf("%d ", a[j]);
	}

	return 0;
}