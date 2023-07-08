#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*******************	max of three integers (세 정수의 최댓값 구하기)	******************/
int main(void) {
	int a, b, c;
	printf("max of Three integers.\n");
	printf("value of a : "); scanf("%d", &a);
	printf("value of b : "); scanf("%d", &b);
	printf("value of c : "); scanf("%d", &c);

	int max = a; //			1. max의 값을 a로 설정합니다. 
	if (max <= b)  //		2. 만약에 max(a의 값)보다 b의 값이 더 크거나 같다면, b의 값을 max로 설정합니다. & 그것이 아니라면 max는 a의 값으로 계속갑니다. (순차구조)
		max = b;
	if (max <= c)  //		3. 코드가 위에서 부터 읽어내립니다. (순차적구조) 내용은 2와 동일.
		max = c;

	printf("value of max : %d", max);  //		4. max (순차구조를 통한 최댓값)을 출력합니다.
}