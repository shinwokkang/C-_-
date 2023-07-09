#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*******************     median of three integers (세 정수의 중앙값 구하기)       ***************/
int med3_1(int a, int b, int c);

int main() {
	int a, b, c;
	printf("median of three integers.\n");
	printf("value of a : "); scanf("%d", &a);
	printf("value of b : "); scanf("%d", &b);
	printf("value of c : "); scanf("%d", &c);
	printf("median : %d", med3_1(a, b, c));
}*/

/* 순차 구조를 이용한 중앙값 구하기입니다. */


/* 위에서부터 진행되면서 범위를 생각하면서 코드를 작성하는 것(순차 구조의 특징)이 중요한 부분인 것 같습니다. */
 int med3_1(int a, int b, int c) {
	if (a >= b)					// ◎ 1.  if 문을 이용하여 a,b를 비교합니다.
		if (b >= c)						// ◆4. (a >= b)를 포함하고, (b >= c)를 비교합니다. 
			return b;
		else if (a <= c)					// ◆5. (a >= b)를 포함하지만, 앞서 비교한 ( b >= c )를 제외한 ( a >=b && b < c && a <= c )를 비교합니다. 
			return a;
		else
			return c;
	else if (a >= c)				// ◎ 2.  앞서 구한 (a >= b)를 제외한 부분에서의 비교이므로 ( a < b && a >= c )를 포함하는 문장입니다.
		return a;
	else if (b >= c)				// ◎ 3.  앞서 구한 ( a >= b )와 ( a >= c )를 모두 제외한 부분이므로 ( a < b && a < c && b >= c )를 포함하는 문장입니다.
		return c;
	else
		return b;
}

/* 다음 함수는 중앙값이 a,b,c일때를 각각 생각하여 작성한 코드입니다. */
int med3_2(int a, int b, int c) {

	if ((b >= a && a >= c) || (c >= a && a >= b))			// a 가 중앙값일 때 ( b - a - c || c - a - b )
		return a;
	 
	else if ((a >= b && b >= c) || (c >= b && b >= a))		// b 가 중앙값일 때 ( a - b - c || c - b - a )
		return b;
	
	else
		return c;
}
