
// 8월 24일
//int main() {
//	char str[6] = "Hello"; // 배열의 이름은 주소
//	char* p;
//	p = str;
//	/*p = &str[0];*/
//	while (*p)
//		putchar(*p++); //문자 출력 후 주소 증가
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
//}//포인터를 사용해서 swap() 호출 후에도 값이 변경디어 있음
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