#include <stdio.h>
NM[1000][1000];
NM1[1000][1000];
NM_SUM[1000][1000];
void main() {
	int A, B, i, j;
	scanf("%d %d", &A, &B);

	for (i = 0; i < A; i++) {
		for (j = 0; j < A; j++) {
			scanf("%d", &NM[i][j]);
		}
	}

	for (i = 0; i < B; i++) {
		for (j = 0; j < B; j++) {
			scanf("%d", &NM1[i][j]);
		}
	}

	for (i = 0; i < A; i++) {
		for (j = 0; j < A; j++) {
			NM_SUM[i][j] = NM[i][j] + NM1[i][j];
			printf("%d ", NM_SUM[i][j]);

		}
		printf("\n");
	}


}