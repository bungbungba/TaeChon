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
한 문자 (0~9)를 숫자로 바꿔주는 함수
@param :: char형 문자
@return :: int형 숫자
*/
int charToInt(char number) {
	if (number == 0)
		return 0;
	else
		return (number - '0');//number-48
}


/*
stringNumberSum
정수를 담은 두 문자열을 덧셈해줍니다.
@param :: 덧셈할 문자열 a, b
@param :: 결과를 담을 문자열 answer
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
문자열을 역순으로 바꿔줍니다.
@param :: 바꿀 문자열 array
@param :: 문자열의 길이 length
*/
void reverseArray(char array[], int length) {
	char temp;
	int i, index;

	//앞, 뒤를 바꾸는 것이기 때문에 반만 하면 됩니다. 
	for (i = 0; i<length / 2; i++) {
		temp = array[i];
		//10칸짜리 배열 = 0~9 (10-1-0) 
		index = length - 1 - i;
		array[i] = array[index];
		array[index] = temp;
	}

}