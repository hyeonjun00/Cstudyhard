//함수를 사용해서 사칙연산하기

#include <stdio.h>

/*

//함수 선언 
void p(int num);

int main(void){  (중략)  }

//함수 정의 
void p(int_num){
	printf("num은 %d입니다.\n", num);
}


*/

// 프로그램에서 함수를 사용하려면 컴파일러에 '이런 함수를 쓸 거야'라고 알려줘야 한다.---> 함수 선언, main()함수 위에 작성
// 함수 선언을 하고 나면 함수가 어떤 일을 할지 정의해야 한다.---> 함수 정의, main()함수 아래쪽에 작성.

void cal(int num);

int main1(void) {
	int num = 2;
	cal(num);

	num = num + 3;
	cal(num);

	num = num * 3;
	cal(num);
	return 0;
}
void cal(int num) {
	printf("num은 %d입니다.\n", num);
}


// 함수를 사용해서 코드 중복을 방지하고 효율적으로 프로그래밍이 가능하다.
// 함수는 printf(), scanf()등등 표준 라이브러리 함수(내장 함수)와 사용자 정의 함수가 았다.
//void는 반환형 double float int char 가 가능함


/*	 int box(int num) {
		return num + 4;
	}
	int는 반환,형 box는 함수명, int num은 매개변수 num + 4는 반환값!
*/


int function_with_return(); // 함수 선언 

int main2(void) {
	int ret = function_with_return();//반환값이 있는 함수 호출
	printf("%d", ret);
	return 0;
}

int function_with_return(){   //함수 정의
	printf("반환값이 있는 함수입니다");
	return 10;
}




void function_with_params(int num1, int num2, int num3); //함수선언

int main3(void) {
	function_with_params(1, 2, 3);
	return 0;
}
void function_with_params(int num1, int num2, int num3){
	printf("전달값이 있는 함수이고, 전달값은 %d, %d, %d입니다.\n", num1, num2, num3);
	}





int apple(int total, int ate);  //함수선언

int main5(void) {
	int ret = apple(5, 2);  //함수호출
	printf("사과 5개중 2개를 먹으면 %d가 남습니다\n", ret);
	printf("사과 %d중 %d개를 먹으면 %d개가 남습니다.\n", 10, 4, apple(10, 4));
	return 0;
}


int apple(int total, int ate) {
	printf("전달값과 반환값이 있는 함수입니다.\n");
	return total - ate;
}



