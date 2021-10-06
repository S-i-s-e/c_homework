#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
	if (n < 3)
	{
		return n;
	}

	return fun(n - 1) + fun(n - 2);
}



int main()
{
	int n;
	scanf("%d", &n);

	//printf("%d\n", fun(n));

	if (n < 3)
	{
		printf("%d\n", n);
		return 0;
	}

	// dp[i]为到i阶台阶有多少种跳法，
	// dp[1]=1, dp[2]=2, dp[i]=dp[i-2]+dp[i-1]
	int *dp = (int *)malloc(sizeof(int) * (n + 1));
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	printf("%d\n", dp[n]);

	return 0;
}
