#include <stdio.h>
#define N 10

long combi(int, int); //���п��� ����
//���� Ȯ���� ��� �ܿ� ������ ����

// ������ �����ϸ� ����
// ������ �������� ������ ����

int main() {
	int n, r, t;//nPr ���� ����,nCr���� ����
	for (n = 0; n <= N; n++) {
		for (t = 0; t < (N - n) * 3; t++)// ������ �־� �ִ� �κ�
			printf(" ");
		for (r = 0; r <= n; r++)//combi�� n , r�� �־� ����ϴ� �κ�
			printf("%3ld   ",combi(n, r));
		printf("\n");

	}
	return 0;
}

long combi(int n, int r) {
	int i;
	long c = 1;
	for (i = 1; i <= r; i++)//���� ����	
		c = c * (n - i + 1) / i;
	return c;
}