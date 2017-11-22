//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void *a, const void *b)
//{
//	return *(int *)b - *(int *)a;
//}
//
//
//int main()
//{
//	int N, *arr, i, distance;
//	
//	scanf("%d", &N);
//	
//	arr = (int*)calloc(N, sizeof(int));
//	
//	for(i = 0 ; i < N; i++) scanf("%d", &arr[i]);
//	
//	qsort(arr, N, sizeof(int), compare);
//	
//	distance = arr[0];
//	
//	for(i = 0 ; i < N - 1; i++)
//	{
//		if(distance > arr[i] - arr[i + 1]) distance = arr[i] - arr[i + 1];
//	}
//	
//	printf("%d\n", distance);
//	
//	return 0;
//}