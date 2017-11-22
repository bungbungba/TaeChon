//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//int main(int argc, char *argv[])
//{
//	char x[201] = { 0 }, y[201] = { 0 }, z[202] = { 0 };
//	int a, b, c, cx, cy;
//
//	scanf("%s %s", x, y);
//	cx = strlen(x) - 1;
//	cy = strlen(y) - 1;
//
//	int i = 0;
//	while (!((x[i] == 0) && (y[i] == 0)))
//	{
//		a = 0;
//		b = 0;
//		if (x[cx] != 0 && cx >= 0) a = x[cx--] - '0';
//		if (y[cy] != 0 && cy >= 0) b = y[cy--] - '0';
//	
//		c = a + b;
//		if (c >= 10) {
//			z[i + 1] = 1;
//			c -= 10;
//		}
//		if ((c + '0' + 1) == ':')
//		{
//			z[i] = '0';
//			z[i + 1] = 1;
//		}
//		else z[i] += c + '0';
//
//		i++;
//	}
//
//	if (z[i] == 1) z[i] += '0'; //앞에 자릿수가 있을 경우 올려줌
//
//	i--;
//	while (z[i] == '0') i--; // 앞에 0이 있을 경우 제거
//
//	for (; i >= 0; i--) printf("%c", z[i]);
//	printf("\n");
//	return 0;
//}