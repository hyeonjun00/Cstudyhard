#include <stdio.h>


int main(void) {
	int 전회, 전자장, 물전, 전소, 확과;
	printf("성적을 100점 만점으로 환산하여 입력하세요(공백으로 구분)");
	scanf("%d %d %d %d %d", &전회, &전자장, &물전, &전소, &확과);
	int score[5] = { 전회, 전자장, 물전, 전소, 확과 };
	int sum = 0;
	float average = 0.0f;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	average = sum / 5.0f;
	printf("총점은 %d점, 평균은 %.1f점입니다.\n", sum, average);
	return 0;
}
