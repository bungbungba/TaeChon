//#include <stdio.h>
//
//int main()
//{
//	//�� 6�� Ȯ��, ���� ����
//	int correct[1001] = { 0 }, team[1001] = { 0 }, score[1001] = { 0 }, data = 1, not_team = 0;
//	//�ݺ��� ����, ��������, �� ��ȣ
//	int i, j, n, m;
//	//1��, ������ ��ȯ��, �ִ�����, 5��° ���
//	//min_score�� ���� �ֱ� ���� �ʱ갪�� ��û���� ū ���� ����
//	int first = 0, temp, min_score = 100000, five_man[1001] = { 0 };
//
//	//���� ���� �Է�
//	scanf("%d", &n);
//
//	//�� ��ȣ�� �����鼭 6���� �Ǵ��� Ȯ��, 5��° ���� ���� Ȯ��
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &m);
//		correct[m]++;
//		if (correct[m] == 5) five_man[m] = i;
//		team[i] = m;
//	}
//	//���� �ƴҰ�� ����Ͽ� ���� ���
//	for (i = 1; i <= n; i++)
//	{
//		if (correct[team[i]] != 6) not_team++;
//		score[team[i]] += i - not_team;
//	}
//
//
//	//�� ��ȣ�� 1������
//	for (i = 1; i < n; i++)
//	{
//		if (correct[i] == 6)
//		{
//			temp = score[i];
//
//			//���� üũ
//			if (min_score > temp)
//			{
//				min_score = temp;
//				first = i;
//			}
//			// �ټ���° ���� üũ
//			else if(min_score == temp)
//				if(five_man[first] > five_man[i]) first = i;
//		}
//	}
//
//	printf("%d\n", first);
//
//	return 0;
//}