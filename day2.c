#include <stdio.h>

//++연산자 활용

int main1(void) {
	int a = 10;
	printf("a는 %d\n", a);
	//a = a + 1;
	a++;
	printf("a는 %d\n", a);
	return 0;
}


//반복문을 배워보자.(for, while, do-while)



//for문
/*  
	for (선언; 조건; 증감) {
			수행할 문장
 }

 */


int main2(void) {
	for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}
	return 0;

} //i를 1로 초기화 해서 처음 출력은 초깃값 1로 출력 그 이후 문장의 증감 부분을 수행하여 1씩 증가하는 루프 



//while문 

/*

선언;
while (조건) {
	//수행할 문장(증감 포함)
}

*/

int main3(void) {
	int i = 1; //while문 밖에서 변수선언
	while (i <= 10) {
		printf("hello world %d\n", i++);
	//i++           while문이 for문 보다 기본적으로 읽기가 편하다. 증감 i++부분은  printf()문 안에 넣어도 되고 printf()문 밖에 넣어도 상관없다. 
	}
	return 0;
}






// do-while문
/*

선언;
do{
	//수행할 문장
}while(조건);


*/

int main4(void) {
	int  i = 1;  //while문 밖에서 변수선언
	do {
		printf("hello world %d\n", i++);
	} while (i <= 10);  //while문과 다른점. do-while은 조건 뒤에 세미콜론을 붙여야 한다. 
	return 0;			//do-while문은 일단 무조건 한번은 실행하고 난 뒤 조건을 확인한다. while문은 조건에 따라 문장을 아예 실행하지 않을수 있다.
}



//조건을 잘못 설정해서 무한반복문에 빠진다면 Ctrl + C 를 하면 실행 강제 종료

int main_prac1(void) {
	for (int i = 0; i < 3; i++) {
		printf("파이팅\n"); // 0,1,2 --->파이팅 3번 출력
	}
	return 0;
}


int main_prac2(void) {
	int i = 0;
	while (i != 5) {
		printf("좋았어!\n");
		i++;
	}
	return 0;
}

int main_prac3(void) {
	int i = 3;
	do {
		printf("오케이\n");
		i--;
	} while (i > 3);  //do-while문은 무조건 한번은 실행 시킨다. 오케이 1번 출력.
	return 0;
}



//이중 반복문(중첩 반복문)을 배워보자. for 문 안에 for 문을 겹치게 작성하는 것.

int main_double(void) {
	for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);
		for (int j = 1; j <= 5; j++) {
			printf("    두 번째 반복문 ; %d\n", j);
		}
	}
	return 0;
}


//이중반복문을 이용한 구구단 출력하기

int main5(void) {
	for (int i = 2; i <= 9; i++) {
		printf("%d단 출력\n", i);
		for (int j = 1; j <= 9; j++) {
			printf("% d x % d = % d\n", i, j, i * j);
		}
	}
	return 0;
}

//피라미드 만들기(왼쪽으로 정렬)
int main_pira_lef(void){
	for (int i = 0; i < 5; i++) {    //5번 반복-->5줄 짜리 피라미드 구성
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");  //두번째 루프가 끝나고 개행
	}
	return 0;
}


int main_pira_rgt(void) {
	for (int i = 0; i < 5; i++) {
		for (int j = i; j <= 4; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}




