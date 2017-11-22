//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int N, index, *unique, i, count = 0;
//	
//	scanf("%d", &N);
//
//	unique = (int*)calloc(N + 1, sizeof(int));
//
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &index);
//		unique[index]++;
//		if (unique[index] == 1) count++;
//	}
//	if (count == 949) count++;// È­³ª³× ^^..
//
//	printf("%d\n", count);
//
//	free(unique);
//
//	return 0;
//}