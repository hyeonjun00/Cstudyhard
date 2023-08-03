//if-else문 break문, continue문, switch-case문을 공부해서 숫자 맞히기 프로젝트를 만들어보자


#include <stdio.h>

//if-else문

/*
if (조건){
	//조건을 만족할때 수행할 문장
}else{
	//조건을 만족하지 않을 때 수행할 문장
}
*/

int main1(void) {
	int age = 15;
	if (age >= 20) {
		printf("성년입니다.\n");
	}
	else {
		printf("청소년입니다,\n");
	}
	return 0;
}

int main2(void) {
	int age = 56;
	if (age >= 8 && age <= 13) {
		printf("초등학생입니다\n");
	}else if (age >= 14 && age <= 16) {
		printf("중학생입니다.\n");
	}else if (age >= 17 && age <= 19) {
		printf("고등학생입니다.\n");
	}else {
		printf("성인입니다.\n");
	}
	return 0;
}

//연산자를 활용해보자

int main3(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	if (a == b && c == d) {
		printf("값이 서로 같습니다.");
	}
	else {
		printf("값이 서도 다릅니다.");
	}
	return 0;
}


int main4(void) {
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 3;
	if (a == b || c == d) {
		printf("a 와 b 또는 c 와 d의 값이 같습니다.");
	}
	else {
		printf("값이 다릅니다.");
	}
	return 0;

}


//break문에 대해서 공부해보자.

int main5(void) {
	for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("나머지 학생들은 내일 발표할게.\n");
			break;
		}
		printf("%d번 학생들은 발표 준비하세요.\n", i);

	}return 0;
}

int main6(void) {
	for (int i = 1; i <= 30; i++) {
		if (i >= 6 && i <= 10) {
			if (i == 7) {
				printf("%d번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d번 학생은 발표준비하세요\n", i);
		}
	}return 0;
}


//난수 생성하기. <time.h>, <stdlib.h> 두 파일이 필요하다.

#include <time.h>
#include <stdlib.h>

//srand(time(NULL));		난수를 뽑을 때는 항상 초기화를 시켜야 한다. 그렇지 않으면 난수가 제대도 나오지 않는다.(계속 같은 값이 나온다)
// rand() % 3;   -- > 0~2 사이의 정수형 난수 생성
// rand() % 3+1  -- > 1~3 사이의 정수형 난수 생성



//0부터 9사이의 숫자를 10번 뽑기

int main7(void) {
	printf("난수 초기화 이전...\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}
	srand(time(NULL)); //난수 초기화
	printf("\n\n난수 초기화...\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", rand() % 10);
	}
	return 0;
}


//switch문을 공부해보자. 

/*

switch (조건){
	case 값1:
		// 수행할 문장
		break;
	case 값2:
		// 수행할 문장
		break;
	...
	default:
		//어떤 값도 해당하지 않을 때 수행할 문장
		
*/


//switch문을 이용한 가위바위보 게임
int main10(void) {
	srand(time(NULL)); //난수 초기화
	int i = rand() % 3; //0~2반환
	switch (i) {                 //case의 조건으로는 하나의 값만 작성 가능하고 범위가 들어갈 수 없다.
		case 0:
			printf("가위\n");
			break;
		case 1:
			printf("바위\n");
			break;
		case 2:
			printf("보\n");
			break;
		default:
			printf("몰라요\n");
		}
		return 0;
	}




// switch 문을 이용한 앞선 나이 예제 구성하기
//case 8일때 수행할 문장이 없고, break문도 없어서 다음 case 9으로 이동하고 결국  break문이 있는 case 13에 도달하여 문장을 출력하고 종료.

int main11(void) {
	int age = 15;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
		printf("초등학생입니다\n");
		break;
	case 14:
	case 15:
	case 16:
		printf("중학생입니다\n");
		break;
	default:
		printf("청소년이 아닙니다.\n");
	}
	return 0;
}








