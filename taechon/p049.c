//#include <stdio.h>
//
//int main()
//{
//	long long arr[91] = { 0, 1, 1, };
//	int i, n, count = 0;
//
//	scanf("%d", &n); // ���°����?
//
//	// �Ǻ���ġ �� �ޱ�
//	for (i = 3; i <= n; i++) arr[i] = arr[i - 2] + arr[i - 1];
//
//	
//	for (i = 0; i <= n; i++)
//		if (arr[i] % 2 == 1) count++;
//	
//	printf("%d\n", count);
//
//	return 0;
//}