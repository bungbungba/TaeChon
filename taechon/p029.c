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
//	int *array, n, k, i, count = 0;
//	double average = 0, small, big;
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
//	for (i = 0; i < n; i++) average += array[i];
//
//	average /= n;
//	small = average - k;
//	big = average + k;
//
//	average = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (array[i] < small) continue;
//		else if (array[i] > big) break;
//		else
//		{
//			average += array[i];
//			count++;
//		}
//	}
//	average /= count;
//	printf("%.1lf\n", average);
//
//	return 0;
//}