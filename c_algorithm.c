#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*******************	max of three integers (�� ������ �ִ� ���ϱ�)	******************/
int main(void) {
	int a, b, c;
	printf("max of Three integers.\n");
	printf("value of a : "); scanf("%d", &a);
	printf("value of b : "); scanf("%d", &b);
	printf("value of c : "); scanf("%d", &c);

	int max = a; //			1. max�� ���� a�� �����մϴ�. 
	if (max <= b)  //		2. ���࿡ max(a�� ��)���� b�� ���� �� ũ�ų� ���ٸ�, b�� ���� max�� �����մϴ�. & �װ��� �ƴ϶�� max�� a�� ������ ��Ӱ��ϴ�. (��������)
		max = b;
	if (max <= c)  //		3. �ڵ尡 ������ ���� �о���ϴ�. (����������) ������ 2�� ����.
		max = c;

	printf("value of max : %d", max);  //		4. max (���������� ���� �ִ�)�� ����մϴ�.
}