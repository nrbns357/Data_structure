#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
int n = 10;
void quicksort(int arr[], int left, int right) {
	if (left >= right) {//정렬할 데이터 수가 1인 경우
		return;
	}
	int pivot = left;
	int i = left + 1;
	int j = right;
	int temp;
	while (i <= j) {
		while (arr[i] <= arr[pivot]) // i위치의 값이 pivot 위치의 값 이하
			i++;
		while (arr[j] >= arr[pivot] && j > left)
			j--;
		if (i > j)//i와 j가 크로스 되었을 경우
			SWAP(arr[j], arr[pivot], temp);
		else//i가 j보다 작은 경우는 피봇과 교체하지 않음.
			SWAP(arr[i], arr[j], temp);
	}
	quicksort(arr, left, j - 1);
	quicksort(arr, j + 1, right);

}
int main() {
	quicksort(arr, 0, n - 1); //left 0, right n-1(배열 인덱스)
	//정렬된 결과가 출력되도록 반복문을 사용하여 배열 내용 보여주기
	for (int i = 0; i < n; i++) {
		printf("%3d", arr[i]);

	}
	//퀵 정렬 시간복잡도 0(NlogN), {평균 속도}
	//퀵 정렬 시간복잡도 0(N^2)인 경우, {최악의 경우}
	//1 2 3 4 5 이미 정렬 되었을 경우 퀵 정렬은 속도가 더욱 느려진다.
	//3 1 24 5 정렬이 안되어 있을 경우 빠르다.
	//이미 정렬이 되어 있을 경우 빠른 정렬은 [삽입 정렬]이다.
	return 0;
}