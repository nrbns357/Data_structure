#include <stdio.h>
#include <stdlib.h>    // qsort �Լ��� ����� ��� ����

// �۽��� ���� ������ ���� 10���� ���̵��� ��ȣ�� ���Ͽ� �Űܾ��ߴ�. ������ ���̵��� ��ȣ�� ���׹������� ���� �־ ���ʴ�� ���� �Ǿ��ִ� ��ȣ���� ���Ѵ�. 
// �츮�� �۽ܿ��� ��ȣ�� �����Ҽ��ִ� �ڵ带 ���� �۽��� ��������.
// ������� ���� ���̵��� {8, 4, 13, 15, 3, 7, 10, 1, 6, 19}�̴�.


//int compare(const void* a, const void* b)    // �������� �� �Լ� ����
//{
//	int num1 = *(int*)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
//	int num2 = *(int*)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
//
//	if (num1 < num2)    // a�� b���� ���� ����
//		return -1;      // -1 ��ȯ
//
//	if (num1 > num2)    // a�� b���� Ŭ ����
//		return 1;       // 1 ��ȯ
//
//	return 0;    // a�� b�� ���� ���� 0 ��ȯ
//}
//
//int main()
//{
//	int numArr[10] = { 0, };    // ���ĵ��� ���� �迭
//	int Student=0;
//
//	// ������ �迭, ��� ����, ��� ũ��, �� �Լ��� �־���
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

// ���ϴ� ���ڸ� �Է��� �� �� ���ڱ��� 
// ����Ҷ� �ݺ����� ������ �ٸ� ���� ���̴� �ݺ����� �ϳ��θ� ���ڸ� ������׷� ����Ͻÿ�.
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
