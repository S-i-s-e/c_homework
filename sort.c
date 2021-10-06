


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>



void swap(void *a, void *b, size_t size)
{
	if (a == b)
	{
		return;
	}

	if (size == 4)
	{
		*(uint32_t *)a = *(uint32_t *)a ^ *(uint32_t *)b;
		*(uint32_t *)b = *(uint32_t *)a ^ *(uint32_t *)b;
		*(uint32_t *)a = *(uint32_t *)a ^ *(uint32_t *)b;
		return;
	}
	if (size == 8)
	{
		*(uint64_t *)a = *(uint64_t *)a ^ *(uint64_t *)b;
		*(uint64_t *)b = *(uint64_t *)a ^ *(uint64_t *)b;
		*(uint64_t *)a = *(uint64_t *)a ^ *(uint64_t *)b;
		return;
	}

	if (size % 4 == 0)
	{
		size /= 4;
		for (int i = 0; i < size; ++i)
		{
			*(uint32_t *)(a + 4 * i) = *(uint32_t *)(a + 4 * i) ^ *(uint32_t *)(b + 4 * i);
			*(uint32_t *)(b + 4 * i) = *(uint32_t *)(a + 4 * i) ^ *(uint32_t *)(b + 4 * i);
			*(uint32_t *)(a + 4 * i) = *(uint32_t *)(a + 4 * i) ^ *(uint32_t *)(b + 4 * i);
		}
		return;
	}
	if (size % 8 == 0)
	{
		size /= 8;
		for (int i = 0; i < size; ++i)
		{
			*(uint64_t *)(a + 8 * i) = *(uint64_t*)(a + 8 * i) ^ *(uint64_t *)(b +  8 * i);
			*(uint64_t *)(b + 8 * i) = *(uint64_t*)(a + 8 * i) ^ *(uint64_t *)(b +  8 * i);
			*(uint64_t *)(a + 8 * i) = *(uint64_t*)(a + 8 * i) ^ *(uint64_t *)(b +  8 * i);
		}
		return;
	}

	for (int i = 0; i < size; ++i)
	{
		*(char *)(a + i) = *(char *)(a + i) ^ *(char *)(b + i);
		*(char *)(b + i) = *(char *)(a + i) ^ *(char *)(b + i);
		*(char *)(a + i) = *(char *)(a + i) ^ *(char *)(b + i);
	}
}

int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

void sort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
{
	for (int i = 0; i < nmemb - size; i += size)
	{	
		for (int j = size; j < nmemb - i; j += size)
		{
			if (compar(base + j - size, base + j) > 0)
			{
				swap(base + j - size, base + j, size);
			}
		}
	}
}

// 插入排序，待排序数组较小时，使用插入排序
void insertionSort(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 1; i < n; i++)
	{
		temp = a[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (temp < a[j])
			{
				a[j + 1] = a[j];
			}else
			{
				break;
			}
		}

		a[j + 1] = temp;
	}
}


/*
// 从头、中、尾 三处取数字，将最小的放到最左边或右边，最大的放到最右边或左边（根据compar）。
// 最后取中间值为锚点，和最左边的交换位置。
// 作用是避免极端情况
void *median3(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
{
	size_t mid = nmemb / 2;

	if (compar(base, base + mid * size) > 0)
	{
		swap(base, base + mid * size, size);
	}
	if (compar(base, base + (nmemb - 1) * size) > 0)
	{
		swap(base, base + (nmemb - 1) * size, size);
	}
	if (compar(base + mid * size, base + (nmemb - 1) * size) > 0)
	{
		swap(base + mid * size, base + (nmemb - 1) * size, size);
	}

	
	swap(, &a[right - 1]);
	return a[right - 1];
}

void quickSort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
{
	// 当数组较小时，使用插入排序
	if (nmemb < 7)
	{
		insertionSort(a + left, right - left + 1);
		return;
	}

	int pivot = median3(a, left, right);
	int i = left + 1;
	int j = right - 2;

	while (1)
	{
		while (a[i] < pivot)
		{
			i++;
		}
		while (a[j] > pivot)
		{
			j--;
		}

		if (i <= j)
		{
			swap(&a[i++], &a[j--]);
		}else
		{
			break;
		}
	}
	swap(&a[i], &a[right - 1]);

	quickSort(a, left, i - 1);
	quickSort(a, i + 1, right);
}


*/

int main()
{
	//char s[128] = "12333456";

	int a[10] = {5, 5, 8, 6, 4, 1, 2, 3, 7, 10};
	
	for (int i = 0; i < 10; ++i)
	{
		//printf("%d ", a[i]);
	}

	sort(a, 10, sizeof(int), cmp);
	//qsort(s, strlen(s), sizeof(char), cmp);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}