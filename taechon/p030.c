//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void * a, const void * b)
//{
//	return *(int *)a - *(int *)b;
//}
//
//int main()
//{
//	int N, K1, K2, K3, i;
//	int *array;
//
//	scanf("%d %d %d %d", &N, &K1, &K2, &K3);
//
//	array = (int *)malloc(sizeof(int) * N);
//
//	for(i = 0 ; i < N ; i++) scanf("%d", &array[i]);
//
//	qsort(array, N, sizeof(int), compare);
//
//	printf("%d\n", array[K1 - 1] + array[K2 - 1] + array[K3 - 1]);
//
//	return 0;
//}