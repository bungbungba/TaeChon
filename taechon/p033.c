//#include <stdio.h>
//
//typedef struct
//{
//	int x, y;
//}POINT;
//
//int main()
//{
//	int m, n, move;
//	char ch;
//	POINT pt = { 0,0 };
//
//	scanf("%d %d", &m, &n);
//
//	while (n--)
//	{
//		scanf(" %c %d", &ch, &move);
//		switch (ch)
//		{
//		case 'N' :
//			pt.y += move;
//			break;
//		case 'S':
//			pt.y -= move;
//			break;
//		case 'W':
//			pt.x -= move;
//			break;
//		case 'E':
//			pt.x += move;
//			break;
//		}
//		if ((pt.x >= 0 && pt.x <= m) && (pt.y >= 0 && pt.y <= m))
//			continue;
//		else break;
//
//	}
//
//	if ((pt.x > 0 && pt.y > 0) && (pt.x <= m && pt.y <= m))
//	{
//		printf("%d %d\n", pt.x, pt.y);
//	}
//	else printf("-1\n");
//	return 0;
//}