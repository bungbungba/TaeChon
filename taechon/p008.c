//#include <stdio.h>
//
//int First_num(int number, int m);
//int Third_num(int number, int m);
//int Fifth_num(int number, int m);
//
//int main()
//{
//	int number = 4300000, x, y, m, count = 0, i;
//
//	scanf("%d %d %d", &x, &y, &m);
//	
//	number += x * 1000 + y * 10;
//	
//	count = Fifth_num(number, m);
//	printf("%d\n", count);
//
//
//	return 0;
//}
//
//int First_num(int number, int m)
//{
//	int i = 0, count = 0, temp = number;
//	for (i = 0; i < 10; i++)
//	{
//		number = temp;
//		number += i;
//		if (number % m == 0) count++;
//	}
//	return count;
//}
//int Third_num(int number, int m)
//{
//	int i = 0, j = 0, count = 0, temp = number;
//	for (i = 0; i < 1000; i+= 100)
//	{
//		number = temp;
//		number += i; 
//		count += First_num(number, m);
//	}
//
//	return count;
//}
//int Fifth_num(int number, int m)
//{
//	int i = 0, count = 0, temp = number;
//	for (i = 0; i < 100000; i+= 10000)
//	{
//		number = temp;
//		number += i;
//		count += Third_num(number, m);
//	}
//	return count;
//}