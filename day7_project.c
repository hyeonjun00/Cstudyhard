#include <stdio.h>

int main(void) {
	int input = 0; // 사용자 입력을 저장할 변수
	char * product[3][4] = {
		{"1.우유", "2.커피", "3.주스", "4.탄산음료"},
		{"5.칸칩", "6.거북칩", "7.감자칩", "8.고구마칩"},
		{"9.안타볼", "10.초코버섯", "11.가재깡", "12.씨리얼"}
	};
	printf("전체 상품 목록입니다.\n");
	printf("======================================================\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%-12s", product[i][j]);
		} printf("\n");
	}
	printf("======================================================\n");
	printf("몇번 상품을 구매하시겠습니까(1~12) :");
	scanf("%d", &input);
	if (input < 1 || input > 12) {
		printf("\n 상품 번호를 잘못 입력했습니다. 프로그램을 종료합니다.\n");
		exit(0);
	}
	input -= 1; //인덱스는 0부터 시작
	int x = input / 4;
	int y = input % 4;
	printf("\n구매하신 상품은 %s입니다.\n", product[x][y]);
	printf("이용해 주셔서 감사합니다!\n");
	return 0;
}