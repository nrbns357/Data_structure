#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


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





//#define SIZE 5	//스택에 넣을 수 있는 최대 사이즈
//void push(int); //스택에서 데이터 한 개 삽입
//void pop();		//스택에서 데이터 한 개 삭제
//void display(); //스택에 있는 데이터 보여주기
//int stack[SIZE];
//int top = -1; //스택에 저장할 위치

//int main() {
//	int val, choice;
//	printf("\n----Menu----\n");
//	while (1) {
//		printf("1.push   2.pop   3.display   4.exit\n");
//		printf("Choice : ");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1: //스택에 push
//			printf("데이터를 입력하세요");
//			scanf("%d", &val);
//			push(val);
//			break;
//
//		case 2: // 스택에서 pop
//			pop();
//			break;
//		case 3: // 스택 내용 display
//			display();
//			break;
//		case 4:  // 프로그램 종료 exit
//			return 0;
//		default:
//			printf("다시 입력하세요.");
//		}
//	}
//	return 0;
//}
//
//void push(int val) { //쪽지시험,  암기 필요
//	if (top == SIZE - 1) //top >=SIZE-1
//		printf("스택이 가득참\n");
//	else
//		stack[++top] = val; // 배열층들을 올라가면서 값을 넣어주기 위해 [++top]을 해준다.
//}
//
//void pop() { //쪽지시험, 암기 필요
//	if (top == -1)
//		printf("스택이 비었음\n");
//	else
//		printf("%d가 삭제됨\n", stack[top--]); // 배열층들을 내려가면서 값들을 빼주는데 [--top]을 해주면 바로 내려가서 그 층의 값을 빼주기 때문에 늦게 [top--]을 해줌으로써 값을 빼고 내려간다. 
//}
//
//void display() {
//	if (top == -1)
//		printf("스택이 비었음\n");
//	else
//		for (int i = top; i >= 0; i--)
//			printf("%4d", stack[i]);
//	printf("\n");
//}





////Queue 구현
//int queue[5];
//
//
//void menuf() { //메뉴 함수
//	printf("\n1.큐에 삽입 2.큐에서 삭제\n");
//	printf("3.내용 보기 4.종료\n");
//}
//
//void Enqueue(int* back, int item) { //큐에 삽입
//	if (*back == 4) { //현재 큐의 사이즈 4
//		printf("큐가 가득함\n");
//		return;
//	}
//	queue[++ * back] = item;
//}
//
//int Dequeue(int* front, int back) {
//	if (*front == back) {
//		return -1; // -1이면 큐가 비었다고 생각
//		//보통 0이 리턴되면 정상적인 종료
//	}
//	return queue[++ * front];
//}
//
//void Display(int front, int back) {
//	if (front == back)
//		printf("큐가 비었음\n");
//	for (int i = front; i < back+1;i++)
//		printf("%4d", queue[i]);
//}
//
//int main() {
//	//큐 스택 모두 1차원 배열로 구현
//	int front = -1, back = -1;
//	//queue : front ,back , stack : top
//	int menu, item;
//	while (1) {
//		menuf();
//		scanf("%d", &menu);
//		switch (menu)
//		{
//
//
//
//		case 1: //큐에 데이터 또는 job 삽입
//			scanf("%d", &item);
//			Enqueue(&back, item);
//			break;
//
//
//
//		case 2: //큐에서 삭제
//			item = Dequeue(&front, back);
//			if (item == -1)
//				printf("큐가 비었음");
//			else
//				printf("%d가 삭제됨\n", item);
//			break;
//
//
//
//		case 3:
//			Display(front, back); //과제
//			//큐의 내용을 출력해 보시오
//			break;
//
//
//
//		case 4:
//			return 0;
//		default:
//			printf("다시 입력하세요");
//		}
//	}
//}



//#pragma warning(disable:4996)
//#include<stdio.h>
//#include<stdlib.h>
////이분 탐색, 이진 탐색 : 정렬된 배열속 데이터 찾기
////1000개의 데이터에서 무조건 10번 만에 데이터 찾거나 없다고 return 해줄수 있다
//int arr[100] = { 5,7,33,66,67,88,99,120,134,156,201 };
//int n, k;//k는 내가 찾을 숫자
//int count = 0;
//
//int binarysearch(int s, int e) {//start end
//	while (s <= e) {
//		count++;
//		int m = (s+e)/2; //m은 middle
//		if (arr[m] == k)
//			return count; //찾은 배열의 인덱스(위치)
//		if (arr[m] > k)
//			e = m - 1;
//		else
//			s = m + 1;
//
//
//	}
//	return -1; //결국 숫자를 못찾음
//
//
//}
//
//int main() {
//	printf("찾을 숫자 입력 : ");
//	scanf("%d", &k); //k=66;
//	printf("%d번만에 발견\n", binarysearch(0, 10));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<windows.h>
//int map[9][9] = {
//{2,2,2,2,2,2,2,2,2},
//{2,0,0,0,0,0,0,0,2},
//{2,0,2,2,0,2,2,0,2},
//{2,0,2,0,0,2,0,0,2},
//{2,0,2,0,2,0,2,0,2},
//{2,0,0,0,0,0,2,0,2},
//{2,2,0,2,2,0,2,2,2},
//{2,0,0,0,0,0,0,0,2},
//{2,2,2,2,2,2,2,2,2}
//};
//int facing = 0;
//const COORD end = { 7,7 };
//COORD back = { 1,1 };
//COORD player = { 1,1 };
//void gotoxy(int x, int y) {
//	COORD pos = { x * 2,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//int main() {
//	printf("딜레이를 입력해주세요 (밀리초) : ");
//	int speed; scanf("%d", &speed);
//	system("cls");
//	gotoxy(0, 0);
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++)
//			printf("%s", map[i][j] ? "■" : "□");
//		putchar(10);
//	}
//	gotoxy(player.X, player.Y);
//	printf("★");
//	while (end.X != player.X || end.Y != player.Y) {
//		Sleep(speed);
//		facing += 3;
//		facing %= 4;
//		while (player.X == back.X && player.Y == back.Y) {
//			switch (facing) {
//			case 0:
//				if (map[player.Y - 1][player.X]) {
//					facing++;
//				}
//				else {
//					player.Y--;
//				}
//				break;
//			case 1:
//				if (map[player.Y][player.X + 1]) {
//					facing++;
//				}
//				else {
//					player.X++;
//				}
//				break;
//			case 2:
//				if (map[player.Y + 1][player.X]) {
//					facing++;
//				}
//				else {
//					player.Y++;
//				}
//				break;
//			case 3:
//				if (map[player.Y][player.X - 1]) {
//					facing = 0;
//				}
//				else {
//					player.X--;
//				}
//				break;
//			}
//		}
//		gotoxy(player.X, player.Y);
//		printf("★");
//		gotoxy(back.X, back.Y);
//		printf("□");
//		gotoxy(0, 10);
//		printf("goal : %d %d\n", end.X, end.Y);
//		printf("player : %d %d\n", player.X, player.Y);
//		printf("last pos : %d %d\n", back.X, back.Y);
//		printf("facing : %s", facing == 0 ? "up   " : facing == 1 ? "right" : facing == 2 ? "down " : "left ");
//		back.X = player.X;
//		back.Y = player.Y;
//	}
//}
//
//#include <stdio.h>
//int m[9][9] = { //maze
//			 {2,2,2,2,2,2,2,2,2},
//			 {2,0,0,0,0,0,0,0,2},
//			 {2,0,2,2,0,2,2,0,2},
//			 {2,0,2,0,0,2,0,0,2},
//			 {2,0,2,0,2,0,2,0,2},
//			 {2,0,0,0,0,0,2,0,2},
//			 {2,2,0,2,2,0,2,2,2},
//			 {2,0,0,0,0,0,0,0,2},
//			 {2,2,2,2,2,2,2,2,2} };
//int Si, Sj, Ei, Ej; //Start 출발, end 도착 지점 표시
//int success, idx, path_i[100], path_j[100];
////S : start,출발점 E: End, 도착점, idx 경로 배열 인텍스
////Path_i, Path_j : 지나간 길을 저장함(i는 행, j는 열)
//int visit(int, int);
//int main() {
//	int top = 0; //stack의 top 변수를 0으로 초기화
//	success = 0;//미로 탈출 여부
//	printf("===미로 탈출 경로 찾기 게임===\n");
//	Si = 1, Sj = 1; //출발점 m배열의 1행 1열 위치
//	Ei = 7, Ej = 7; //도착점 m배열의 7행 7열 위치
//	if (visit(Si, Sj) == 0)
//		printf("미로의 출구를 찾을 수 없음\n");
//	else
//		printf("미로의 모든 경로를 찾았음\n");
//	return 0;
//}
//int visit(int i, int j) {
//	static int path = 1;//찾은 경로의 수
//	m[i][j] = 1;//배열에 0이 있다면 아직 가지 않은 길이란 의미
//	//지나간 길에는 1을 저장해 둔다.
//
//}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int m[9][9] = { //maze, 미로를 나타내는 2차원 배열
//			 {2,2,2,2,2,2,2,2,2},//2는 미로의 벽
//			 {2,0,0,0,0,0,0,0,2},//0은 갈수 있는 길
//			 {2,0,2,0,2,2,2,0,2},
//			 {2,0,2,0,0,2,0,0,2},
//			 {2,0,2,0,2,0,2,0,2},
//			 {2,0,0,0,0,0,2,0,2},
//			 {2,2,0,2,2,0,2,2,2},
//			 {2,0,0,0,0,0,0,0,2},
//			 {2,2,2,2,2,2,2,2,2} };

//int Si, Sj, Ei, Ej; //출발(Start) 행렬(i,j), 도착(End)행렬(i.j) 
//int success, idx, Path_i[100], Path_j[100]; //i=행 , j=열
////success : 미로탐색 성공 여부
////top : 시스템 스택에 저장되는 위치 *시스템 스택이란? 재귀 함수 사용시 쓰는 함수이다.
////path_i, path_j 미로 탐색한 경로 저장
//int visit(int, int);
//
//int main() {
//	int top = 0;
//	int success = 0; //미로를 탐색하지 않음. 실패
//	printf("===미로 탈출 경로 찾기 게임===\n");
//	Si = 1, Sj = 1;
//	Ei = 7, Ej = 7;
//	if (visit(Si, Sj) == 0)
//		printf("미로의 출구를 찾을 수 없음\n");
//	else
//		printf("미로의 모든 경로를 찾음\n");
//	return 0;
//}
//
//int visit(int i, int j) { //i,j 행과 열,행열(row.column)
//	static int pathCount = 1;
//	//찾은 경로의 개수를 저장, static의 의미를 알고 있어야함.
//	Path_i[top] = i;
//	Path_j[top++] = j;
//	//top++;
//	if (i == Ei && j == Ej) { //도착 했을 때, 미로 탐색 성공
//		printf("찾은 경로 %d번", pathCount++);
//		printCount();
//		success = 1;
//	}
//
//	///미로탐색하기///
//	if (m[i][j + 1]==0) {//배열 오른쪽 이동
//		visit(i, j + 1);
//	}
//	if (m[i + 1][j] == 0)//배열 아래행으로 이동
//		visit(i + 1, j);
//	if (m[i][j-1] == 0)//배열 왼쪽으로 이동
//		visit(i, j - 1);
//	if (m[i - 1][j] == 0)//배열 위로 이동
//		visit(i - 1, j);
//	top--;//모든길이 막혀있으면 이전단계로 돌아감
// //재귀적 함수의 호출에 따른 시스템 스택 길이를 표시
//	m[i][j] = 0;//이전단계로 돌아가면서 1을 0으로 다시 세팅
// 새로운 길을 찾도록 다시 0으로 세팅
//	return success;


//}
//
//
//int m[20][50] = {
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,0,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,0,2,2,2,2,2,2,2,2,0,2,2,2,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,0,2,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,2,2,2,2,2,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,2},
//	{2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}
//
//};


//'Donald L. Shell'이라는 사람이 제안한 방법으로,
//삽입정렬을 보완한 알고리즘이다.
void shellSort(int arr[], int n) {//n : 11
	int i, j, tmp, gap;
	for (gap = n / 2; gap > 0; gap /= 2) {//gap=gap/2
		//if (!(gap % 2)) gap++;//짝수면 홀수로
		for (i = gap; i < n; i++) {//삽입정렬 응용
			tmp = arr[i];
			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = tmp;
		}
	}
}

//문제 gap이 5일 때 (첫번째 수행시) 배열의 숫자들의 이동상황을 적으시오.
// 11 9


int main() { //10개 데이터를 쉘 정렬하는 법을 말해보자.
	int arr[] = { 11,9,15,12,3,6,5,8,11,2,7 }; //총11개 ,10개
	int n = sizeof(arr) / sizeof(int); //11
	printf("%d개 데이터 정렬\n", n);
	shellSort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%4d", arr[i]);
	printf("\n");
	return 0;
}