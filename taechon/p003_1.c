#include <stdio.h>
#include <string.h>
//#define COUNT 201

void reverseArray(char array[], int length);
void stringNumberSum(char a[], char b[], char answer[]);
int charToInt(char number);

int main() {

	int COUNT = 201;
	char a[COUNT] = { 0, };
	char b[COUNT] = { 0, };
	char answer[COUNT] = { 0, };

	scanf("%s", a);
	scanf("%s", b);
	stringNumberSum(a, b, answer);

	printf("%s", answer);
	return 0;
}

/*
charToInt
�� ���� (0~9)�� ���ڷ� �ٲ��ִ� �Լ�
@param :: char�� ����
@return :: int�� ����
*/
int charToInt(char number) {
	if (number == 0)
		return 0;
	else
		return (number - '0');//number-48
}


/*
stringNumberSum
������ ���� �� ���ڿ��� �������ݴϴ�.
@param :: ������ ���ڿ� a, b
@param :: ����� ���� ���ڿ� answer
*/
void stringNumberSum(char a[], char b[], char answer[]) {
	int aLength = strlen(a);
	int bLength = strlen(b);
	int length = aLength > bLength ? aLength : bLength;
	int i = 0, temp = 0, carryNumber = 0;

	reverseArray(a, aLength);
	reverseArray(b, bLength);


	for (i = 0; i<length; i++) {
		temp = charToInt(a[i]) + charToInt(b[i]) + carryNumber;
		carryNumber = 0;

		if (temp >= 10) {
			carryNumber = temp / 10;
			temp = temp % 10;
		}
		answer[i] = (temp + '0');
	}


	if (carryNumber > 0) {
		answer[i] = (carryNumber + '0');
		length += 1;
	}


	reverseArray(answer, length);
}

/*
reverseArray
���ڿ��� �������� �ٲ��ݴϴ�.
@param :: �ٲ� ���ڿ� array
@param :: ���ڿ��� ���� length
*/
void reverseArray(char array[], int length) {
	char temp;
	int i, index;

	//��, �ڸ� �ٲٴ� ���̱� ������ �ݸ� �ϸ� �˴ϴ�. 
	for (i = 0; i<length / 2; i++) {
		temp = array[i];
		//10ĭ¥�� �迭 = 0~9 (10-1-0) 
		index = length - 1 - i;
		array[i] = array[index];
		array[index] = temp;
	}

}