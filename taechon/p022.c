//#include <stdio.h>
//#include <stdlib.h>
//
//
//int main()
//{
//
//	int heigth, width, i, j;
//	long long  **arr, **copy, sum = 0, max;
//
//	scanf("%d %d", &heigth, &width);
//
//	//�����Ҵ����� 2���� �迭 ����� http://codeng.tistory.com/8 ����
//	//arr
//	{
//		arr = (long long **)calloc(heigth, sizeof(long long*));
//		arr[0] = (long long *)calloc(heigth * width, sizeof(long long));
//		for (i = 1; i < heigth; i++)
//			arr[i] = arr[i - 1] + width;
//	}
//	//copy
//	{
//		copy = (long long **)calloc(heigth, sizeof(long long*));
//		copy[0] = (long long *)calloc(heigth * width, sizeof(long long));
//		for (i = 1; i < heigth; i++)
//			copy[i] = copy[i - 1] + width;
//	}
//
//	//�� ����
//	for (i = 0; i < heigth; i++)
//	{
//		for (j = 0; j < width; j++)
//		{
//			scanf("%lld", &arr[i][j]);
//		}
//	}
//
//	// x��
//	for (i = 0; i < heigth; i++)
//	{
//		max = 0;
//		for (j = 0; j < width; j++)
//			if (max < arr[i][j]) max = arr[i][j];
//		for (j = 0; arr[i][j] != max; j++);
//		copy[i][j] = max;
//	}
//
//	// y��
//	for (i = 0; i < width; i++)
//	{
//		max = 0;
//		for (j = 0; j < heigth; j++)
//			if (max < arr[j][i]) max = arr[j][i];
//
//		for (j = 0; arr[j][i] != max; j++);
//		copy[j][i] = max;
//	}
//
//	for (i = 0; i < heigth; i++)
//	{
//		for (j = 0; j < width; j++)
//		{
//			if (copy[i][j] == 0)
//				sum += arr[i][j];
//		}
//	}	
//
//	printf("%lld\n", sum);
//
//	free(arr[0]);
//	free(arr);
//	free(copy[0]);
//	free(copy);
//
//	return 0;
//}