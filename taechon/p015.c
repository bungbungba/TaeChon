#include <stdio.h>

void enterNumber(int *n, int *l, int *w);

int main()
{
	//truck[] = Ʈ�������� ����, which[] = �ٸ����� Ʈ���� ��ġ
	int truck[1000] = { 0 }, n, l, w, time = 0, count = 0, which[101] = { 0 }, total_weight = 0, result = 0, i;
	char data;

	enterNumber(&n, &l, &w);// Ʈ�� ����, �ٸ� ����, ����

	// Ʈ�� ������ ���� ���� �Է�
	for (i = 0; i < n; i++)
	{
		scanf("%d", &truck[i]);
		if (truck[i] < 1 || truck[i] > w)
		{
			printf("�߸��� ���Դϴ�. �ٽ� �Է��� �ּ���\n\n");
			i--;
			continue;
		}
	}
	while (1)
	{
		total_weight = 0;

		for (i = 0; i < l; i++)
		{
			which[i] = which[i + 1];
			total_weight += which[i];
		}
		if (total_weight + truck[count] <= w)
		{
			which[l - 1] = truck[count];
			count++;
		}
		for (i = 0; i < l; i++)
		{
			if (which[i] != 0)
			{
				data = 'y';
				break;
			}
			data = 'n';
		}
		time++;
		if (data == 'n')
			break;
	}
	printf("%d\n", time);

	return 0;
}

void enterNumber(int *n, int *l, int *w)
{
	scanf("%d", n); // ����
	while (1)
	{
		if (*n < 1 || *n > 1000)
		{
			printf("�߸��� ���Դϴ�. �ٽ� �Է��� �ּ���\n\n");
			scanf("%d", n);
		}
		else
		{
			break;
		}
	}

	scanf("%d", l); // ����
	while (1)
	{
		if (*l < 1 || *l > 100)
		{
			printf("�߸��� ���Դϴ�. �ٽ� �Է��� �ּ���\n\n");
			scanf("%d", l);
		}
		else
		{
			break;
		}
	}

	scanf("%d", w); // ����
	while (1)
	{
		if (*w < 10 || *w > 1000)
		{
			printf("�߸��� ���Դϴ�. �ٽ� �Է��� �ּ���\n\n");
			scanf("%d", w);
		}
		else
		{
			break;
		}
	}

}