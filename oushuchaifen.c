#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>


/*
求n以内的素数，素数储存在*a中
返回素数的个数
*/
uint64_t primes(const uint64_t n, uint64_t **primes)
{
	if (n < 2) // 小于2直接返回
	{
		*primes = NULL;
		return 0;
	}

	// 创建大小为n+1的数组
	bool *nums = (bool *)malloc(sizeof(bool) * (n + 1));
	memset(nums, 0, (n + 1) * sizeof(bool));
	nums[0] = 1;
	nums[1] = 1;
	
	/*埃氏筛法，nums中0代表素数，1代表合数，最开始认为全是素数*/
	uint64_t i, j;
	uint64_t quantity = 0;
	for (i = 2; i <= n; ++i)
	{
		// 若nums[i]为1，说明i为合数，跳过，直到下一个素数
		while (i <= n && nums[i])
		{
			++i;
		}

		quantity += 1; // 每到一个素数，计数加一
		// i为素数，将所有i的倍数剔除
		for (j = i + i; j < n; j += i)
		{
			nums[j] = 1;
		}
	}
	if (nums[n])
	{
		quantity -= 1; // 若n为合数，当i到n结束while循环时也计数了一次，所以减回来
	}

	// 给*primes分配quantity个空间，将筛选后的素数保存到*primes中
	*primes = (uint64_t *)malloc(sizeof(uint64_t) * (quantity));
	for (i = 2, j = 0; i <= n; ++i)
	{
		if (!nums[i])
		{
			*(*primes + j) = i;
			++j;
		}
	}

	free(nums);
	return quantity;
}

//bsearch所用的比较函数
int cmp(const void *a, const void *b)
{
	return *(uint64_t *)a - *(uint64_t *)b;
}


// 先使用埃氏筛求出n以内的素数，然后对
int main()
{
	uint64_t n;
	scanf("%ld", &n);
	if (n < 6 || n % 2 != 0)
	{
		printf("Input an even num (>=6)\n");
		return 0;
	}

	uint64_t *a;
	uint64_t nm = primes(n, &a);

	uint64_t *p;
	uint64_t temp;
	for (uint64_t i = 0; i <= nm; ++i)
	{
		temp = n - a[i];
		p = bsearch(&temp, a, nm, sizeof(uint64_t), cmp);
		if (p != NULL)
		{
			printf("%ld+%ld\n", a[i], temp);
			break;
		}
	}

	free(a);
	return 0;
}
