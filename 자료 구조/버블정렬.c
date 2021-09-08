#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5	//스택에 넣을 수 있는 최대 사이즈
void push(int); //스택에서 데이터 한 개 삽입
void pop();		//스택에서 데이터 한 개 삭제
void display(); //스택에 있는 데이터 보여주기

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
//		for(int j=1;j<n-i;j++)		// for(int j=0; j<n-i-1; j++) 옆 for문과 같은 의미인 for문
//			if (a[j - 1] > a[j]) {  // if(a[j]>a[j+1]) 옆 if문과 같은 의미인 if문
//
//				//선택정렬 if(a[i]>a[j]) 헷갈리수 있음
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
int top = -1; //스택에 저장할 위치

int main() {
	int val, choice;
	printf("\n----Menu----\n");
	while (1) {
		printf("1.push   2.pop   3.display   4.exit\n");
		printf("Choice : ");
		scanf("%d", &choice);
		switch (choice) {
		case 1: //스택에 push
			printf("데이터를 입력하세요");
			scanf("%d", &val);
			push(val);
			break;

		case 2: // 스택에서 pop
			pop();
			break;
		case 3: // 스택 내용 display
			display();
			break;
		case 4:  // 프로그램 종료 exit
			return 0;
		default:
			printf("다시 입력하세요.");
		}
	}
	return 0;
}

void push(int val) { //쪽지시험,  암기 필요
	if (top == SIZE - 1) //top >=SIZE-1
		printf("스택이 가득참\n");
	else
		stack[++top] = val;
}

void pop() { //쪽지시험, 암기 필요
	if (top == -1)
		printf("스택이 비었음\n");
	else
		printf("%d가 삭제됨\n", stack[top--]);
}

void display() {
	if (top == -1)
		printf("스택이 비었음\n");
	else
		for (int i = top; i >= 0; i--)
			printf("%4d", stack[i]);
	printf("\n");
}