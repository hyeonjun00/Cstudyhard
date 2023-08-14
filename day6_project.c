//배열의 특정 요소 값을 바꾸는 프로그램을 만들어 보자(포인터 사용)
#include <stdio.h>
#include <math.h>

void square(int* ptr) {
	if (*ptr % 2 == 0) {
		*ptr = pow(*ptr, 2);
	}
}
	
	
int main(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		square(&arr[i]); //배열 각 요소의 메모리 주소 전달
	}
	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
		if (i < 9) {
			printf(",");
		}
	}
}