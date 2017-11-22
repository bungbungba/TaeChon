#include <stdio.h>

int Array[5000000] = { 0, };

int main() {

	int N, i, count = 0, NUM;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &NUM);
		if (Array[NUM] == 1) {

		}
		else
			Array[NUM] = 1;
	}

	for (i = 0; i < 5000000; i++) {
		if (Array[i] == 1) {
			count++;
		}
	}

	printf("%d\n", count);

	return 0;
}