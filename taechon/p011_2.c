//#include <stdio.h>
//
//typedef struct triangle
//{
//	int	Short, MID, Long;
//}TRIANGLE;
//
//int main()
//{
//	int N, temp1, temp2, count = 0;
//	TRIANGLE triangle;
//
//	scanf("%d", &N);
//
//	int i, j;
//
//
//	for (i = 1; i <= N / 3; i++) // 밑변보다 크면 안되니까 1/3까지
//	{
//		// temp1, 2 = 입력받은 값(N)을 계산하여 잠깐 보관하였다가 넣어주는 변수
//		temp1 = N;
//		triangle.Short = i; temp1 -= i;
//
//		for (j = 1 ; j <= N / 2; j++)
//		{
//			temp2 = temp1;
//			triangle.MID = j; temp2 -= j;
//			triangle.Long = temp2;
//
//			if (triangle.Short + triangle.MID > triangle.Long) // 삼각형 조건
//			{
//
//			//	printf("%d %d %d\n", triangle.Short, triangle.MID, triangle.Long) 계산이 맞는지 체크
//				if (triangle.Short <= triangle.MID && triangle.Long >= triangle.MID)
//				//	printf("%d %d %d\n", triangle.Short, triangle.MID, triangle.Long) 출력이 맞는지 체크
//					count++;
//			}
//
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
