#include <stdio.h>
#include <stdlib.h>

unsigned long long compare(const void * a, const void * b)
{
	return *(unsigned long long*)b - *(unsigned long long*)a;
}
int main()
{
	int n, i, j, k, b = 0;
	unsigned long long *arr;

	scanf("%d", &n);
	arr = (unsigned long long*)calloc(n, sizeof(unsigned long long));

	for (i = 0; i < n; i++)
	{
		scanf("%llu", &arr[i]);
	}

	qsort(arr, n, sizeof(unsigned long long), compare);

	for (i = 0; i < n - 3; i++)
	{
		for (j = i + 1; j < n - 2; j++)
		{
			for (k = j + 1; k < n - 1; k++)
			{
				if (arr[i] < arr[j] + arr[k]) b = 1;
				else if (arr[i] == arr[j] && arr[j] == arr[k]) b = 1;
				if (b)
				{
					printf("%d\n", arr[i] + arr[j] + arr[k]);
					return 0;
				}
			}
		}
	}
	printf("NONE\n");

	return 0;
}