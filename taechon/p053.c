//#include <stdio.h>
//
//int main()
//{
//	//팀 6명 확인, 팀의 점수
//	int correct[1001] = { 0 }, team[1001] = { 0 }, score[1001] = { 0 }, data = 1, not_team = 0;
//	//반복문 변수, 참가선수, 팀 번호
//	int i, j, n, m;
//	//1등, 데이터 교환값, 최대점수, 5번째 등수
//	//min_score에 값을 넣기 위해 초깃값은 엄청나게 큰 수로 해줌
//	int first = 0, temp, min_score = 100000, five_man[1001] = { 0 };
//
//	//참가 선수 입력
//	scanf("%d", &n);
//
//	//팀 번호를 받으면서 6명이 되는지 확인, 5번째 선수 순서 확인
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &m);
//		correct[m]++;
//		if (correct[m] == 5) five_man[m] = i;
//		team[i] = m;
//	}
//	//팀이 아닐경우 계산하여 점수 계산
//	for (i = 1; i <= n; i++)
//	{
//		if (correct[team[i]] != 6) not_team++;
//		score[team[i]] += i - not_team;
//	}
//
//
//	//팀 번호는 1번부터
//	for (i = 1; i < n; i++)
//	{
//		if (correct[i] == 6)
//		{
//			temp = score[i];
//
//			//점수 체크
//			if (min_score > temp)
//			{
//				min_score = temp;
//				first = i;
//			}
//			// 다섯번째 주자 체크
//			else if(min_score == temp)
//				if(five_man[first] > five_man[i]) first = i;
//		}
//	}
//
//	printf("%d\n", first);
//
//	return 0;
//}