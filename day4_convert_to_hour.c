#include <stdio.h>

int convert_time(int minutes);

int main(void) {
	int time = 0;
	printf("시간을 분으로 입력하세요: ");
	scanf("%d", &time);
	convert_time(time);
	return 0;
}

int convert_time(int minutes) {
	printf("%d시간 %d분", minutes / 60, minutes % 60);
}

