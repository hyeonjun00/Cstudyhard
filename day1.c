#include <stdio.h> //stdio.h는 표준 입출력 함수를 포함한 헤더 파일, printf() scanf()포함


// printf()알아보자.
int main_1(void)
{
	printf("Hello world\t");
	printf("Hello world");
	return 0;
}

//변수에 대해 알아보자.

/* 
변수명 작성 규칙
1.알파벳, 숫자, 밑줄 사용가능. 알파벳은 대소문자 구별
2.첫 글자 숫자 x 이름에 공백 x
3.키워드로 지정된 단어 x
*/


/*
int age; //변수 선언
age = 20; //변수 초기화, 이때 20은 초깃값
int age = 20; // 변수 선언과 동시에 초기화
*/


int main_2(void) {
	int age = 20;
	printf("%d\n", age);
	age = 21;			 //선언한 변수에 다시 값을 넣을때는 자료형(int) 넣지 않아도 된다.
	printf("%d\n", age);
	return 0;
}


// 자료형에 대해 알아보자.

/*
서식 지정자

int		%d		값이 정수일때 
float	%.nf	값이 실수일때 n은 출력할 소수점 이하 자릿수, n+1자리에서 반올림 4바이트
double	%.nlf	값이 실수일때 n은 출력할 소수점 이하 자릿수, n+1자리에서 반올림	8바이트
char	%c		값이 문자일때
		%s		값이 문자열일때	
*/

int main3(void) {
	float f = 46.5f;
	printf("%f\n", f); //기본적으로 printf()함수는 실수형 변수의 값을 출력할때 소수점 이하 여섯째 자리까지 출력
	printf("%.2f\n", f);  //소수점 이하 셋째 자리에서 반올림 해서 소수점 이하 둘째 자리까지 출력
	double d = 4.428;
	printf("%.2lf\n", d);
	return 0;
}

// 상수에 대해 알아보자.

int main4(void) {
	const int YEAR = 2000; //상수
	printf("내가 태어난 연도: %d\n", YEAR);
	//YEAR = 1900; 로 값을 변경하려고 하면 오류발생
	return 0;
}

// 더하기 출력

int main5(void) {
	//int add = 3 + 7;
	//printf("3 + 7 = %d\n", add);
	printf("3 + 7 = %d\n", 3+7 );
	return 0;
}

//scanf() 알아보자. 기본적인 표준 입력 명령어는 scanf(), 그러나 scanf()를 사용하면 입력크기에 제한이 없어서 버퍼 오버플로라는 메모리 문제 발생할 수 있다,
// 이를 방지하기 위해 VS에서는 scanf_s()를 사용한다.
int main6(void) {
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input); //포인터, &는 메로리 주소를 나타날 때 사용한다. &input은 input 변수가 할당된 메모리 주소를 의미, 이 주소에 입력받은 값을 넣는다.
	printf("값이 입력되었습니다 : %d ", input);
	return 0;

}

int main7(void) {
	int one, two, three;
	printf("정수 3개 입력하세요: ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값: %d\t", one);
	printf("두번째 값: %d\t", two);
	printf("세번째 값: %d\t", three);
	return 0;
}


//문자에는 크게 문자와 문자열이 있다. 문자는 한글자 문자열은 여러 문자의 모임. char의 자료형은 문자형 변수, 문자일때는 작은 따옴표 표시
int main8(void) {
	char c = 'A';
	printf("%c\n", c);
	return 0;
}

//문자열은 보통 값에 여러문자가 한번에 들어가기 때문에 일반변수가 아닌 배열(array)을 사용함.

int main9(void) {
	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str); //배열일때는 &표시없이 변수명만 작성하면 된다. 나중에 포인터로 배열에 접근하는 법 배우자.
	return 0;
}
