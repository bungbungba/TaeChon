//#include <stdio.h>
//
//
//int main()
//{
//	int n, k, t, m, i, j, team, problem, score_data, pride = 1;
//	int score[101] = { 0, };
//	int count[101] = { 0, };
//	// �� = ����, �� = ��
//	int pro_score[101][101] = { 0, };
//	int pro_count[101][101] = { 0, };
//	int time[101] = { 0 };
//
//	//�⺻���� �� �ޱ�
//	//n - �� ����, k - ���� ����, t - �� id, m - �α� ��Ʈ�� ����
//	scanf("%d %d %d %d", &n, &k, &t, &m);
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d %d", &team, &problem);
//		scanf("%d", &score_data);
//		if(score_data > pro_score[team - 1][problem - 1])
//		pro_score[team - 1][problem - 1] = score_data;
//		pro_count[team - 1][problem - 1]++;
//		time[team - 1] = i;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < k; j++)
//		{
//			score[i] += pro_score[i][j];
//			count[i] += pro_count[i][j];
//		}
//	}
//
//
//
//	for (i = 0; i < n; i++)
//	{
//		// �ڱ��ڽ� üũ x
//		if (i == t - 1) continue;
//
//		if (score[i] > score[t - 1]) pride++;
//		else if (score[i] == score[t - 1])
//		{
//			if (count[i] < count[t - 1]) pride++;
//			else if (count[i] == count[t - 1])
//				if (time[i] < time[t - 1]) pride++;
//		}
//	}
//
//	printf("%d\n", pride);
//
//	return 0;
//}