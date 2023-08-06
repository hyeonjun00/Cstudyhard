#include <stdio.h>

//배열이 필요한 이유

int main1(void) {
	int subway_1 = 30;
	int subway_2 = 40;
	int subway_3 = 50;
	printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
	printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
	printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway_3);
	return 0;
}

//만약 지하철이 100호차까지 있다면 변수를 100번 선언해야 하는 상황이 생긴다. 이럴 때 필요한 게 배열(array)이다.
//배열은 동일한 자료형의 값 여러개를 저장하는 연속된 공간을 말한다.

//위 예제의 subway 배열 ---> int subway_array[3];



//배열 선언하기 

int main2(void) {
	int subway_array[3];  //배열의 크기에는 상수만 사용 가능하다. 변수 X
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;
	for (int i = 0; i < 3; i++) {
		printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
	}
	
	return 0;
}



//앞에서는 배열을 선언하고 인덱스를 이용해 요소마다 일일이 값을 저장. 이번에는 배열의 선언과 초기화를 동시에.

int main3(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //배열 초기화
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
// 배열을 선언만 할때는 배열 크기를 꼭 넣어야 하지만 배열을 선언하면서 초기화 할 때는 배열 크기를 넣지 않아도 된다
// int arr[] = {1, 2};



int main4(void) {
	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%.2f\n", arr_f[i]);

	}
	return 0;
}
//값을 저장하지 않은 4,5번째 요소는 0.00출력



//배열에 문자열 저장하기

int main5(void) {
	
	char str[] = "coding";
	//char str[7] = "coding";  // 문자의 끝을 알리는 null 문자를 포함시켜야 해서 배열 크기를 글자수 + 1로 해야한다.
	printf("% s\n", str);
	printf("%d\n", sizeof(str));  // 7출력 
	return 0;
}

int main6(void) {
	char str[] = "coding";
	for (int i = 0; i < sizeof(str); i++) {
		printf("%c\n", str[i]);
	}return 0;
}


int main7(void) {
	char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));
	return 0;
}   // 9출력---> 알파벳과 숫자는 한 글자에 1바이트를 차지하지만, 한글은 한 글자에 2바이트의 공간이 필요함.



//아스키코드는 서식 지정자를 %c로 하면 문자 a가 그대로 출력되고 %d로 하면 문자 a의 아스키코드 값이 10진수로 출력.

int main8(void) {
	// 아스키코드 값 0~127에 해당하는 문자 확인
	for (int i = 0; i < 128; i++) {
		printf("아스키코드 값 %d : %c\n", i, i);
	}return 0;
}