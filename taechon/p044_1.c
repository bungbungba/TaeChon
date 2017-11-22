//#include <stdio.h>
//#include <stdlib.h>
//
//char* arr[20000];
//char* arr2[20000];
//
//int correct(int a,int b,char* arr,char* arr2)
//{
//	int n,i,sum=0,c=0;
//	for(i=a;i<b+a;i++)
//	{
//		if(arr[i]=='R' && arr2[c] == 'P')
//		sum++;
//		else if(arr[i]=='P' && arr2[c] == 'S')
//		sum++;
//		else if(arr[i]=='S' && arr2[c] == 'R')
//		sum++;
//		c++;
//	}
//	return sum;
//}
//
//int main(){
//	int a,b,c,i,sum=0,sum1=0;
//	scanf("%d %d",&a,&b);
//	scanf("%s",arr); scanf("%s",arr2);
//	
//	for(i=0;i<a;i++)
//	{
//		sum = correct(i,b,arr,arr2); 
//		if(sum>sum1)
//				sum1 = sum;
//	}
//	printf("%d",sum1);
//	
//	return 0;
//}
