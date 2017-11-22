//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char arr[51];
//	int i, len, left = 0, right = 0;
//	scanf("%s", arr); //  gets대신 씀
//	len = strlen(arr); 
//
//	for (i = 0; i < len; i++)
//	{
//		if(arr[i] == '(') left++; // VPS ++ 대신
//		if(arr[i] == ')') right++; // VPS -- 대신
//	}
//
//	// len - 1 이라 안하고 i - 2 라고 썻음
//	// left == right 대신 VPS라는 변수써서 !VPS라는 조건 씀
//	if (left == right && arr[0] == '(' && arr[len - 1] == ')') printf("YES\n");
//	else printf("NO\n");
//	
//	return 0;
//}