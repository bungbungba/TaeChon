//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int	n, i, j;
//	int mode = 0, freq, count = 1;
//	int	*array;
//	int *max;
//
//	scanf("%d", &n);
//	array = (int*)malloc(sizeof(int) * n);
//	max = (int*)calloc(10000, sizeof(int));
//
//	for (i = 0; i < n; i++) scanf("%d", &array[i]);
//
//	for (i = 0; i < n; i++)
//	{
//		max[array[i]]++;
//		if (max[array[i]] > count)
//		{
//			count = max[array[i]];
//			mode = array[i];
//		}
//		else if (max[array[i]] == count && array[i] > mode) mode = array[i];
//	}
//
//	printf("%d %d\n", mode, count);
//
//	return 0;
//}