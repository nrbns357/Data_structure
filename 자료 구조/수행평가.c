#include <stdio.h>
#include <stdlib.h>    // qsort 함수가 선언된 헤더 파일

// 송쌤은 영어 마을을 가는 10명의 아이들의 번호를 파일에 옮겨야했다. 하지만 아이들의 번호가 뒤죽박죽으로 섞여 있어서 차례대로 정리 되어있는 번호들을 원한다. 
// 우리는 송쌤에게 번호를 정리할수있는 코드를 만들어서 송쌤을 도와주자.
// 영어마을을 가는 아이들은 {8, 4, 13, 15, 3, 7, 10, 1, 6, 19}이다.


//int compare(const void* a, const void* b)    // 오름차순 비교 함수 구현
//{
//	int num1 = *(int*)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
//	int num2 = *(int*)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
//
//	if (num1 < num2)    // a가 b보다 작을 때는
//		return -1;      // -1 반환
//
//	if (num1 > num2)    // a가 b보다 클 때는
//		return 1;       // 1 반환
//
//	return 0;    // a와 b가 같을 때는 0 반환
//}
//
//int main()
//{
//	int numArr[10] = { 0, };    // 정렬되지 않은 배열
//	int Student=0;
//
//	// 정렬할 배열, 요소 개수, 요소 크기, 비교 함수를 넣어줌
//
//	for (int j = 0; j < 10; j++) {
//		scanf_s("%d", &numArr[j]);
//	}
//
//	qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);
//	printf('\n');
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", numArr[i]);    
//	}
//
//	printf("\n");
//
//	return 0;
//}

// 원하는 숫자를 입력했 때 그 숫자까지 
// 출력할때 반복문을 제외한 다른 곳에 쓰이는 반복문은 하나로만 숫자를 지그재그로 출력하시오.
//int main(){
//
//    int a[10][10] = { 0 }, n, row = 0, col = 0, sum = 1;
//    scanf_s("%d", &n);
//    for (int index = 1; index <= n * n; index++)
//    {
//        if (row == n) {
//            col++;
//            sum = -1;
//            row += sum;
//        }
//        else if (row == -1) {
//            col++;
//            row -= sum;
//            sum = 1;
//        }
//
//        a[row][col] = index;
//        row += sum;
//    }
//
//
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++) {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//
