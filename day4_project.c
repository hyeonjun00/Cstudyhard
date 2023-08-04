#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int solve_password(int level); // main() 함수 위에 함수 선언, 정수형 난수 생성(int)



int main(void) {
	srand(time(NULL)); //난수 초기화
	int cnt = 0;
	
	for (int i = 1; i <= 5; i++) { //5번 반복
		int x = solve_password(i);    //int x = rand() % 9 + 1;
		int y = solve_password(i);    //int y = rand() % 9 + 1;
		printf("############ %d번째 비밀번호 ############\n", i);
		printf("%d X %d ? \n", x, y);
		printf("#########################################\n");
		printf("\n비밀번호를 입력하세요.(종료를 원하면 -1입력) >>");
		//문제 제시


		

		int answer = 100;
		scanf("%d", &answer);
		if (answer == -1) {
			printf("프로그램을 종료합니다.\n");
			exit(0);  //바로 종료
		}else if (answer == x * y) {
			printf("정답입니다.\n");
			cnt++;
		}
		else {
			printf("틀렸습니다.\n");
		}
	}
	printf("비밀번호 %d개를 맞혔습니다.\n", cnt);
	return 0;
}

int solve_password(int level) {
	return rand() % (level * 9) + 1;
}