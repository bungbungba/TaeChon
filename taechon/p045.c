//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char arr[51];
//	int i, len, left = 0, right = 0;
//	scanf("%s", arr); //  gets��� ��
//	len = strlen(arr); 
//
//	for (i = 0; i < len; i++)
//	{
//		if(arr[i] == '(') left++; // VPS ++ ���
//		if(arr[i] == ')') right++; // VPS -- ���
//	}
//
//	// len - 1 �̶� ���ϰ� i - 2 ��� ����
//	// left == right ��� VPS��� �����Ἥ !VPS��� ���� ��
//	if (left == right && arr[0] == '(' && arr[len - 1] == ')') printf("YES\n");
//	else printf("NO\n");
//	
//	return 0;
//}