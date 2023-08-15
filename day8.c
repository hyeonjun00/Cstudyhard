//구조체에 대해서 알아보자!

#include <stdio.h>

int main1(void) {
	char* name = "나도 게임";
	int year = 2023;
	int price = 50;
	char* company = "나도 회사";

	char* name2 = "너도 게임";
	int year2 = 2022;
	int price2 = 40;
	char* company2 = "너도 회사";
	return 0;
}

/*
같은 형태의 게임 정보를 관리하는데 게임마다 변수에 따로따로 저장되어 있다.같은 자료형의 변수가 많을 때는 배열을 사용했지만, 이처럼 변수의 자료형이 다양할때
정보를 하나로 관리하기 위해 구조체(structure)를 사용한다. 구조체는 전역변수처럼 main() 함수 위에 존재
*/

/*
struct GameInfo {  //구조체 정의 
	char* name;
	int year;
	int price;
	char* company;
};


int main2(void) {
	struct GameInfo gameInfo1; //구조체 변수 선언
	//구조체 멤버 저장
	gameInfo1.name = "나도 게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 40;
	gameInfo1.company = "나도 회사";
	//구조체 멤버 출력 
	printf("-- 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo1.name);
	printf("발매 연도 : %d\n", gameInfo1.year);
	printf("게임 가격 : %d\n", gameInfo1.price);
	printf("제작 회사 : %s\n", gameInfo1.company);
	
	
	//두번째 게임 정보
	struct GameInfo gameInfo2 = { "너도 게임", 2022, 100, "너도 회사" }; //구조체도 배열처럼 중괄호를 사용해 값을 한꺼번에 초기화할 수 있다/
	printf("-- 두번째 게임 출시 정보 --\n");
	printf("게임 이름 : %s\n", gameInfo2.name);
	printf("발매 연도 : %d\n", gameInfo2.year);
	printf("게임 가격 : %d\n", gameInfo2.price);
	printf("제작 회사 : %s\n", gameInfo2.company);
	return 0;


}
*/

//구조체 배열 만들기
//구조체를 배열로 만들어서 구조체 변수 2개를 연속해서 저장할 수 있다.


/*
struct GameInfo gameArray[2] = {
	{"나도 게임", 2022, 50, "나도 회사"},
	{"너도 게임", 2022, 100, "너도 회사"}
};

*/


//구조체 포인터를 공부해보자
//구조체 포인터는 구조체 변수의 주소를 가리키는 변수를 의미한다.

// struct 구조체명 * 변수명;



struct GameInfom {  //구조체 정의 
	char* name;
	int year;
	int price;
	char* company;
};

int main6(void) {
	struct GameInfom  gameInfo3 = { "나는 게임", 2021, 60, "나는 회사" };
	struct GameInfom* gamePtr;   //구조체 포인터 선언
	gamePtr = &gameInfo3;
	printf("게임이름 : %s\n", (*gamePtr).name);  //소괄호 써야하는거 주의
	printf("출시연도 : %d\n", gamePtr->year);	//간접멤버 참조 연산자(화살표)를 사용한 접근
	return 0;
}



//구조체 안에 구조체 사용하기

struct GameInfo {  //구조체 정의 
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame; //GameInfo의 5번째 멤버이면서 포인터 변수. gameInfo1변수로 friendGame 멤버에 접근 가능
};


int main3(void) {
	struct GameInfo gameInfo1; //구조체 변수 선언
	//구조체 멤버 저장
	gameInfo1.name = "나도 게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 40;
	gameInfo1.company = "나도 회사";
	struct GameInfo gameInfo2 = { "너도게임", 2022,100,"너도회사" };
	gameInfo1.friendGame = &gameInfo2;
	printf("----다른회사 게임 출시 정보----\n");
	printf("게임이름 : %s\n", gameInfo1.friendGame->name);  // gameInfo1.friendGame 이 가리키는곳이 gameInfo2의 주소이므로 aneInfo2의 정보에 접근해 출력할 수 있다.
	printf("게임가격 : %d\n", gameInfo1.friendGame->price);
	return 0;
}



//typedef로 구조체 선언하기
// typedef ==> 파이썬 random as rd

/*
int i = 1;
typedef int 정수;
정수 변수 = 3;
*/



struct sellingProduct {
	char* name;
	int* price;
	struct sellingProduct* anotherSelling;

};

int main7(void) {
	typedef struct sellingProduct 판매물품;
	판매물품 selling1;
	selling1.name = "당근";
	selling1.price = 1000;
	printf("판매물품이름 : %s\n", selling1.name);
	return 0;

}


/*
<구조체 별명 정의>


typedef struct {
	자료형1 변수명1;
	자료형2 변수명2;
		.
		.
		.

}구조체명;
*/

//구조체 포인터는 (*구조체변수명).멤버 or 구조체변수명 -> 멤버   두가지 형식으로 값에 접근가능.