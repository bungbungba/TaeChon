#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int main()
{
	int N, *arr, i, count = 1;
	
	scanf("%d", &N);
	
	arr = (int*)calloc(N, sizeof(int));
	
	for(i = 0 ; i < N; i++) scanf("%d", &arr[i]);
	
	qsort(arr, N, sizeof(int), compare);
	
	for(i = 1; i < N; i++)
	{
		if(arr[i] != arr[i - 1]) count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}