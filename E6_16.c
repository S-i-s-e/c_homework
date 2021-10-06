#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
	if (n < 3)
	{
		return n;
	}

	int sum = 1;
	for (int i = 1; i < n; ++i)
	{
		sum += fun(n - i);	
	}
	return sum;
}



int main()
{
	int n;
	scanf("%d", &n);

	/*printf("%d\n", fun(n));
	return 0;*/

	if (n < 3)
	{
		printf("%d\n", n);
		return 0;
	}

	// dp[i]为到i阶台阶有多少种跳法，
	// dp[1]=1, dp[2]=2, dp[i]=dp[i-2]+dp[i-1]+...+dp[1]+dp[0];
	int *dp = (int *)malloc(sizeof(int) * (n + 1));
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	int sum = 4;
	for (int i = 3; i <= n; ++i)
	{
		dp[i] = sum;
		sum += dp[i];
	}

	printf("%d\n", dp[n]);

	return 0;
}
