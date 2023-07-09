#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*******************     median of three integers (�� ������ �߾Ӱ� ���ϱ�)       ***************/
int med3_1(int a, int b, int c);

int main() {
	int a, b, c;
	printf("median of three integers.\n");
	printf("value of a : "); scanf("%d", &a);
	printf("value of b : "); scanf("%d", &b);
	printf("value of c : "); scanf("%d", &c);
	printf("median : %d", med3_1(a, b, c));
}*/

/* ���� ������ �̿��� �߾Ӱ� ���ϱ��Դϴ�. */


/* ���������� ����Ǹ鼭 ������ �����ϸ鼭 �ڵ带 �ۼ��ϴ� ��(���� ������ Ư¡)�� �߿��� �κ��� �� �����ϴ�. */
 int med3_1(int a, int b, int c) {
	if (a >= b)					// �� 1.  if ���� �̿��Ͽ� a,b�� ���մϴ�.
		if (b >= c)							// ��4. (a >= b)�� �����ϰ�, (b >= c)�� ���մϴ�. 
			return b;
		else if (a <= c)					// ��5. (a >= b)�� ����������, �ռ� ���� ( b >= c )�� ������ ( a >=b && b < c && a <= c )�� ���մϴ�. 
			return a;
		else
			return c;
	else if (a >= c)			// �� 2.  �ռ� ���� (a >= b)�� ������ �κп����� ���̹Ƿ� ( a < b && a >= c )�� �����ϴ� �����Դϴ�.
		return a;
	else if (b >= c)			// �� 3.  �ռ� ���� ( a >= b )�� ( a >= c )�� ��� ������ �κ��̹Ƿ� ( a < b && a < c && b >= c )�� �����ϴ� �����Դϴ�.
		return c;
	else
		return b;
}

/* ���� �Լ��� �߾Ӱ��� a,b,c�϶��� ���� �����Ͽ� �ۼ��� �ڵ��Դϴ�. */
int med3_2(int a, int b, int c) {

	// a �� �߾Ӱ��� �� ( b - a - c || c - a - b )
	if ((b >= a && a >= c) || (c >= a && a >= b))
		return a;
	
	// b �� �߾Ӱ��� �� ( a - b - c || c - b - a ) 
	else if ((a >= b && b >= c) || (c >= b && b >= a))
		return b;
	
	else
		return c;
}