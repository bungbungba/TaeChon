//#include <stdio.h>
//
//int Rsp(char a, char b);
//
//int main()
//{
//	char a[20001], b[20001], buff;
//
//	int n, m, i, j, compare, max = 0;
//	
//	scanf("%d %d ", &n, &m);
//	gets(a);
//	gets(b);
//	
//
//	for (i = 0; i < n; i++)
//	{
//		compare = 0;
//		for (j = 0; j < m; j++)
//			compare += Rsp(a[i + j], b[j]);
//		
//		if (max < compare) max = compare;
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}
//
//int Rsp(char a, char b)
//{
//	if (a == 'R' && b == 'P') 	return 1;
//	else if (a == 'P' && b == 'S')return 1;
//	else if (a == 'S' && b == 'R')return 1;
//	else 	return 0;
//}
