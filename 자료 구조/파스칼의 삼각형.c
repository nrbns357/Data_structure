#include <stdio.h>
#define N 10

long combi(int, int); //수학에서 조합
//수학 확률과 통계 단원 순열과 조합

// 순서를 생가하면 순열
// 순서를 생각하지 않으면 조합

int main() {
	int n, r, t;//nPr 순열 공식,nCr조합 공식
	for (n = 0; n <= N; n++) {
		for (t = 0; t < (N - n) * 3; t++)// 공백을 넣어 주는 부분
			printf(" ");
		for (r = 0; r <= n; r++)//combi에 n , r을 넣어 출력하는 부분
			printf("%3ld   ",combi(n, r));
		printf("\n");

	}
	return 0;
}

long combi(int n, int r) {
	int i;
	long c = 1;
	for (i = 1; i <= r; i++)//수학 공식	
		c = c * (n - i + 1) / i;
	return c;
}