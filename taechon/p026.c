//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void * a, const void * b)
//{
//	return *(int *)a - *(int *)b;
//}
//
//
//int main()
//{
//	int n, i;
//	int *array;
//	
//	scanf("%d", &n);
//	array = (int*)malloc(sizeof(int) * n);
//	
//	for(i = 0; i < n ; i++)
//	{
//		scanf("%d", &array[i]);
//	}
//	
//	qsort(array, n, sizeof(int), compare);
//	
//	if(n % 2 == 0) printf("%.1lf\n", (array[(n - 1) / 2] + array[(n - 1) / 2 + 1]) / 2.0);
//	else printf("%d\n", array[(n - 1) / 2]);
//	
//	free(array);
//	
//	return 0;
//}
