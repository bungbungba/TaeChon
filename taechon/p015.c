#include <stdio.h>

void enterNumber(int *n, int *l, int *w);

int main()
{
	//truck[] = 트럭개수당 무게, which[] = 다리에서 트럭의 위치
	int truck[1000] = { 0 }, n, l, w, time = 0, count = 0, which[101] = { 0 }, total_weight = 0, result = 0, i;
	char data;

	enterNumber(&n, &l, &w);// 트럭 개수, 다리 길이, 하중

	// 트럭 개수에 따른 무게 입력
	for (i = 0; i < n; i++)
	{
		scanf("%d", &truck[i]);
		if (truck[i] < 1 || truck[i] > w)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
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
	scanf("%d", n); // 개수
	while (1)
	{
		if (*n < 1 || *n > 1000)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
			scanf("%d", n);
		}
		else
		{
			break;
		}
	}

	scanf("%d", l); // 길이
	while (1)
	{
		if (*l < 1 || *l > 100)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
			scanf("%d", l);
		}
		else
		{
			break;
		}
	}

	scanf("%d", w); // 하중
	while (1)
	{
		if (*w < 10 || *w > 1000)
		{
			printf("잘못된 값입니다. 다시 입력해 주세요\n\n");
			scanf("%d", w);
		}
		else
		{
			break;
		}
	}

}