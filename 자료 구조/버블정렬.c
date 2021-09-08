#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5	//���ÿ� ���� �� �ִ� �ִ� ������
void push(int); //���ÿ��� ������ �� �� ����
void pop();		//���ÿ��� ������ �� �� ����
void display(); //���ÿ� �ִ� ������ �����ֱ�

//void swap(int* xp, int* yp)
//{
//	int temp = *xp;
//	*xp = *yp;
//	*yp = temp;
//}
//
////void bubbleSort(int arr[], int n)
////{
////	int i, j;
////	for (i = 0; i < n - 1; i++)
////		for (j = 0; j < n - i - 1; j++)
////			if (arr[j] > arr[j + 1])
////				swap(&arr[j], &arr[j + 1]);
////}
//
//void bubble1(int a[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for(int j=1;j<n-i;j++)		// for(int j=0; j<n-i-1; j++) �� for���� ���� �ǹ��� for��
//			if (a[j - 1] > a[j]) {  // if(a[j]>a[j+1]) �� if���� ���� �ǹ��� if��
//
//				//�������� if(a[i]>a[j]) �򰥸��� ����
//				int t = a[j - 1];
//				a[j - 1] = a[j];
//				a[j] = t;
//			}
//	}
//}
//
//int main() {
//	int a[5] = { 5,2,3,4,1 };
//	bubble1(a, 5);
//	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
//
//	return 0;
//}

int stack[SIZE];
int top = -1; //���ÿ� ������ ��ġ

int main() {
	int val, choice;
	printf("\n----Menu----\n");
	while (1) {
		printf("1.push   2.pop   3.display   4.exit\n");
		printf("Choice : ");
		scanf("%d", &choice);
		switch (choice) {
		case 1: //���ÿ� push
			printf("�����͸� �Է��ϼ���");
			scanf("%d", &val);
			push(val);
			break;

		case 2: // ���ÿ��� pop
			pop();
			break;
		case 3: // ���� ���� display
			display();
			break;
		case 4:  // ���α׷� ���� exit
			return 0;
		default:
			printf("�ٽ� �Է��ϼ���.");
		}
	}
	return 0;
}

void push(int val) { //��������,  �ϱ� �ʿ�
	if (top == SIZE - 1) //top >=SIZE-1
		printf("������ ������\n");
	else
		stack[++top] = val;
}

void pop() { //��������, �ϱ� �ʿ�
	if (top == -1)
		printf("������ �����\n");
	else
		printf("%d�� ������\n", stack[top--]);
}

void display() {
	if (top == -1)
		printf("������ �����\n");
	else
		for (int i = top; i >= 0; i--)
			printf("%4d", stack[i]);
	printf("\n");
}