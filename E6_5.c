#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

//typedef _Bool bool;
typedef unsigned long int uint64_t;

/*
埃氏筛法，求n以内的素数，返回一个bool数组，数组中0代表素数，1代表合数
*/
bool *era(const uint64_t n)
{
	if (n < 2) // 小于2直接返回
	{
		return NULL;
	}

	// 创建大小为n+1的数组
	bool *nums = (bool *)malloc(sizeof(bool) * (n + 1));
	memset(nums, 0, (n + 1) * sizeof(bool));
	nums[0] = 1;
	nums[1] = 1;
	
	/*埃氏筛法，nums中0代表素数，1代表合数，最开始认为全是素数*/
	uint64_t i, j;
	// 当筛除完i的倍数的时候，i*i以内的合数都已经被筛除完了，所以只需要筛除到sqrt(n)的倍数就能把n以内的合数全部筛除完
	for (i = 2; i <= sqrt(n); ++i)
	{
		// 若nums[i]为1，说明i为合数，跳过，直到下一个素数
		while (i <= sqrt(n) && nums[i])
		{
			++i;
		}

		// i为素数，将所有i的倍数剔除
		// 当筛除i的倍数时，因为像2*i, 3*i...(i-1)*i这样的数都已经被筛除，所以从i的平方开始
		for (j = i * i; j <= n; j += i)
		{
			nums[j] = 1;
		}
	}

	return nums;
}

/*
求n以内的素数，素数储存在primes中并返回，*retSize为素数的个数
*/
uint64_t *primes(const uint64_t n, uint64_t *retSize)
{
	*retSize = 0;
	if (n < 2) // 小于2直接返回
	{
		return NULL;
	}

	// 埃氏筛法
	bool *nums = era(n);

	
	int i, j;
	for (i = 2; i <= n; ++i) // 对素数个数进行计数
	{
		if (!nums[i])
		{
			++*retSize;
		}
	}
	// 给primes分配*retSize个空间，将筛选后的素数保存到primes中
	uint64_t *primes = (uint64_t *)malloc(sizeof(uint64_t) * (*retSize));
	for (i = 2, j = 0; i <= n; ++i)
	{
		if (!nums[i])
		{
			*(primes + j) = i;
			++j;
		}
	}

	free(nums);
	return primes;
}

int cmp(const void *a, const void *b)
{
	return *(uint64_t *)a - *(uint64_t *)b;
}


int main()
{
	uint64_t n;
	scanf("%ld", &n);
	if (n < 6 || n % 2 != 0)
	{
		printf("Input an even num (>=6)\n");
		return 0;
	}

	/*
	bool *a = era(n);

	for (uint64_t i = 2; i <= n; ++i)
	{
		if (!a[i] && !a[n - i])
		{
			printf("%ld+%ld\n", i, n - i);
			break;
		}
	}

	free(a);
	*/

	uint64_t nm;
	uint64_t *p = primes(n, &nm);
	uint64_t temp;
	for (uint64_t i = 0; i < nm; ++i)
	{
		temp = n - p[i];
		if (bsearch(&temp, p, nm, sizeof(uint64_t), cmp))
		{
			printf("%ld+%ld\n", p[i], n - p[i]);
			break;
		}
	}
	
	free(p);
	return 0;
}
