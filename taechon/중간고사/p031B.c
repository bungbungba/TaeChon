//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int *result, score = 0, i, n, Yes = 1, No = -1;
//	
//	scanf("%d", &n);
//	
//	result = (int*)calloc(n, sizeof(int));
//	
//	for(i = 0 ; i < n ; i++) scanf("%d", &result[i]);
//	
//	for(i = 0 ; i < n ; i++)
//	{
//		if(result[i])
//		{
//			score += Yes;
//			Yes++;
//			No = -1;
//		}
//		else
//		{
//			score += No;
//			No--;
//			Yes = 1;
//		}
//	}
//	
//	printf("%d\n", score);
//	
//	return 0;
//}
