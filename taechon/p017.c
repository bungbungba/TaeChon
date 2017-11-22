//#include <stdio.h>
//
//
////값 두개 바꾸는 함수
////@parm : 포인터로 값을 받아 변수의 값을 바꿔줌
//void swap(int * x, int * y);
//
//int main()
//{
//	int N, num, First_min, Second_min, i;
//
//	scanf("%d", &N);
//
//	if (N == 2)
//	{
//		scanf("%d", &First_min);
//		scanf("%d", &Second_min);
//		if (First_min > Second_min) swap(&First_min, &Second_min);
//	}
//	else
//	{
//		for (i = 0; i < N; i++)
//		{
//			scanf("%d", &num);
//
//			//continue 이유는 밑에 if문에서 값이 대입되있지 않기 때문에 실행오류가 남
//			if (i == 0)
//			{
//				First_min = num;
//				continue;
//			}
//			else if (i == 1)
//			{
//				Second_min = num;
//				continue;
//			}
//
//			//작으면 값 대입
//			if (Second_min > num) Second_min = num;
//			
//			//작은지 아닌지 비교해서 작으면 젤 작다고 함
//			if (First_min > Second_min) swap(&First_min, &Second_min);
//		}
//	}
//
//	printf("%d\n", Second_min);
//
//	return 0;
//}
//
//void swap(int * x, int * y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}