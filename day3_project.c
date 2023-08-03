//1~100 사이의 난수 생성하고 5번의 기회로 숫자 맞추기 프로젝트
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h> 
int main(void) {
	srand(time(NULL));
	int num = rand() % 100 + 1;
	printf("정답 : %d\n", num);
	int answer = 0;
	int chance = 5;

	while (true) {
		printf("남은 기회 %d번 \n", chance--);
		printf("1에서 100사이 숫자를 맞춰봐:");
		scanf("%d", &answer);
		if (answer > num) {
			printf("Down ↓\n\n ");
		}
		else if (answer == num) {
			printf("정답입니다!\n\n");
			break;
		}
		else if (answer < num) {
			printf("UP ↑\n\n");
		}
		if (chance == 0) {
			printf("실패했습니다.\n");
			break;
		}
	}
	return 0;
}