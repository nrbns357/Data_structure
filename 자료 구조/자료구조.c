#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define <stdlib.h> //malloc, free �Լ��� ����� ��� ����

// 8�� 24��
//int main() {
//	char str[6] = "Hello"; // �迭�� �̸��� �ּ�
//	char* p;
//	p = str;
//	/*p = &str[0];*/
//	while (*p)
//		putchar(*p++); //���� ��� �� �ּ� ����
//
//
//	return 0;
//}
//
//void swap1(int a, int b) { //call by value
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void swap2(int* a, int* b) { //call by reference
//	int t = *a;
//	*a = *b;
//	*b = t;
//}//�����͸� ����ؼ� swap() ȣ�� �Ŀ��� ���� ������ ����
//
//int main() {
//	int n1 = 5, n2 = 7;
//	printf("n1=%d, n2=%d\n", n1, n2);
//	swap1(n1,n2);
//	printf("n1=%d, n2=%d\n", n1, n2);
//	swap2(&n1,&n2);
//	printf("n1=%d, n2=%d\n", n1, n2);
//}
//

//8�� 25��

///*���� ����:
//	
//	n���� ������ �Է� �޾� ���� �������� �����Ͽ� ����Ͻÿ�.
//	5
//	3 6 1 3 4
//	1 3 3 4 6
//
//*/
//
//void input(int a[], int cnt) {
//	for (int i = 0; i < cnt; i++)
//		scanf("%d", &a[i]);
//}
//
//void output(int a[], int cnt) {
//	for (int i = 0; i < cnt; i++)
//		printf("%d ", a[i]);
//}
//
//void swap(int* x, int* y) {
//	int t = *x;
//	*x = *y;
//	*y = t;
//}
//
//void selectionSort(int a[], int cnt) {
//	for (int i = 0; i < cnt - 1; i++) {
//		for (int j = i + 1; j < cnt; j++) {
//			if (a[i] > a[j]) {
//				swap(&a[i], &a[j]);
//			}
//		}
//	}
//}
//
//int main() {
//	int n;
//	int a[100];
//	scanf("%d",&n);
//	input(a, n);
//	selectionSort(a, n);
//	output(a, n);
//}
