#include <stdio.h>

//변수와 메모리의 관계에 대해 알아보자.

int main1(void) {
	int 철수 = 1;
	int 영희 = 2;
	int 민수 = 3;
	printf("철수네 주소 : %p, 암호 : %d\n", &철수, 철수); //철수네 주소 : 000000D87D30FAC4, 암호 : 1 출력됨. 변수 철수가 메모리의 어느 위치에 있는지를 나타낸다.(변수의 주소)
	printf("영희네 주소 : %p, 암호 : %d\n", &영희, 영희);
	printf("민수네 주소 : %p, 암호 : %d\n", &민수, 민수);
	
	//포인터 변수 선언과 값 출력
	int * 손님;
	
	손님 = &철수;
	
	printf("손님이 방문한 곳의 주소 : %p, 암호 : %d\n", 손님, *손님);
	
	*손님 = *손님 * 3;
	
	printf("손님이 암호를 바꾼곳의 주소 : %p, 암호 : %d\n", 손님, *손님); // 포인터 변수는 다른 변수의 주소를 알아낼 수 있고, 알아낸 변수의 주소로 찾아가 값도 직접 바꿀수 있다.
	
	//포인터 변수를 추가해 값 바꾸기
	
	printf("\n>> 스파이가 미션을 수행하는 중 <<\n"); // 구분을 위해 추가
	
	int* 스파이 = 손님;
	
	*스파이 = *스파이 - 1; // 철수 = 철수 - 1;
	
	printf("스파이가 방문한 곳의 주소 : %p, 암호 : %d\n\n", 스파이, *스파이);

	printf("스파이의 주소 : %p\n", &스파이); //스파이란 포인터 변수도 다른 변수와 마찬가지로 주소가 있다. 철수의 주소와 멀지 않은 곳에 존재
	
	printf("철수네 주소 : %p, 암호 : %d\n", &철수, 철수);  // 변수의 값이 실제로 바뀌었다.
	
	return 0;
}

// 정리하면, 손님과 스파이같은 포인터 변수는 어떤 변수의 주소를 값으로 가지고 있으며 주소를 이용해 주소에 해당하는 변수의 값을 직접 바꿀수 있다




//포인터로 배열에 접근하기 

int main2(void) {
	int arr[3] = { 5, 10, 15 };
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	}
	int* ptr = arr;
	for (int i = 0; i < 3; i++) {
		printf("포인터 변수 ptr[%d]의 값 : %d\n", i, ptr[i]);  // 포인터 변수에 배열을 값으로 넣으면 포인터 변수는 배열의 첫번째 요소의 주소(배열의 시작주소)를 가리키게 된다.
	}
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++) {
		printf("배열 arr[%d]의 : %d\n", i, arr[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("포인터 변수 ptr[%d]의 값 : %d\n", i, ptr[i]); //포인터 변수의 값을 바꾸면 포인터 변수가 가리키는 배열의 값도 바뀜.
	}	//printf("포인터 변수 ptr[%d]의 값 : %d\n", i, *(ptr + i));
		//printf("포인터 변수 ptr[%d]의 값 : %d\n", i, *(arr + i));
	return 0;
}// 포인터 변수가 직접 배열의 각 요소에 접근해서 값을 바꾼다. 배열의 이름인 arr와 포인터 변수인 ptr은 같은 역할을 함.
// int * ptr = arr; 는 가능하지만 int * arr[3] = ptr;은 가능x
// *(arr+2) == arr[2];  arr에서 2만큼 떨어진 곳에 저장된값과 arr배열의 2 인덱스 값은 같다.



int main3(void) {
	int arr[3] = { 0,1,2 };
	printf("arr 자체의 값 : %p\n", arr);
	printf("arr[0]의 주소 : %p\n", &arr[0]); // arr 자체가 가지는 값과 arr 배열 첫번째 요소의 주소가 같음을 확인할 수 있다.

	printf("arr 자체의 값인 주소의 실제 값 : %d\n", *arr);
	printf("arr[0]의 실제 값: %d\n", *&arr[0]);  //* 와 &를 함께 사용하면 두개는 상쇄된다.
	return 0;

} 




//포인터로 값 교환하기

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("swap()함수 안에서의 a의 주소: %p\n", &a);
	printf("swap()함수 안에서의 b의 주소: %p\n", &b);
	printf("swap() 함수 안 => a : %d, b : %d\n", a, b);
	
}

int main4(void) {
	int a = 10;
	int b = 20;
	printf("a의 주소 : %p\n", &a);
	printf("b의 주소 : %p\n", &b);
	printf("swap() 함수 호출 전 => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("swap() 함수 호출 후 => a : %d, b : %d\n", a, b);
	return 0;
}

//값에 의한 호출

//함수 호출 후에도 a가 10 b가 20으로 값이 그대로이다. 그런데 함수 안에서는 a가 20, b가 10으로 값이 바뀌어 있다. 
//main()함수에서 swap()함수를 호출 할때 변수 a와 b를 전달했지만, 실제로는 두 변수 자체가 아닌 두 변수의 값만 전달해서 그렇다.
/*
변수를 출력해보면 main()함수에 선언한 변수 a의 주소와 swap()함수의 변수a 주소가 다르다.이는 main()함수에서의 a와 swap()함수 안의 a가 서로
다른 변수라는 뜻이다. 즉 swap()함수 안에서 서로 다른 공간에 변수 a가 새로 만들어 졌다는 뜻. 이처럼 함수를 호출하면서 전달값으로 변수를 넘기면 호출한 함수 안에서는 변수 자체가 아닌 전달받은
변수의 값만 복사해서 사용한다. 그럼 주소자체를 넘기면 어떨끼?
*/



//주소를 넘겨보자!
void swap_addr(int* a, int* b) {
	int temp = *a; //변수 temp를 선언하고 포인터 변수 a에 담긴 주소의 실제 값 저장
	*a = *b;
	*b = temp;
	printf("swap_addr()함수 안 => a : %d, b : %d\n", *a, *b);
}

	int main5(void){
		int a = 20;
		int b = 10;
		swap(a, b);
		printf("swap_addr()함수 호출 후 ==> a : %d, b : %d\n", a, b);
		return 0;
		}

//참조에 의한 호출






void changeArray(int* ptr) {
	ptr[2] = 50;
}

int main6(void) {
	int arr2[3] = { 1, 2, 3 };
	changeArray(arr2);
	for (int i = 0; i < 3; i++) {
		printf("% d\n", arr2[i]);
	}
	return 0;
}


