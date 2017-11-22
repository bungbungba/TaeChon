//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void *a, const void *b)
//{
//	return *(int *)a - *(int *)b;
//}
//
//int main()
//{
//	int *array, n, k, i;
//	double Ectozoon = 0, Corrected_average = 0;
//
//	scanf("%d %d", &n, &k);
//
//	array = (int*)malloc(sizeof(int) * n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//
//	qsort(array, n, sizeof(int), compare);
//
//	for (i = k; i < n - k; i++) Ectozoon += array[i];
//	Ectozoon /= n - k * 2;
//
//	for (i = 0; i < k; i++)	array[i] = array[k];
//	for (i = n - 1; i > n - k - 1; i--)	array[i] = array[n - k - 1];
//	for (i = 0; i < n; i++) Corrected_average += array[i];
//	Corrected_average /= n;
//
//	printf("%.1lf %.1lf\n", Ectozoon, Corrected_average);
//
//	return 0;
//}