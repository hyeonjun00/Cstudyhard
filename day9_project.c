#include <stdio.h>
#include <string.h>

int main(void) {
	char word[1000] = "";
	char mean[1000] = "";
	char input[1000] = "";
	FILE* file = fopen("C:\\Users\\USER\\Desktop\\word.txt", "rb");  //바이너리 읽기 모드파일로 열기
	if (file == NULL) {
		printf("파일 열기 실패\n");  //파일 읽기 오류시 우회
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		fscanf(file, "%s %s", word, mean);
		printf("'%s'(이)라는 뜻을 가진 영어 단어는?", mean);
		scanf("%s", input);
		if (!strcmp(input, word) ){
			printf("%s, 정답입니다.\n\n>", word);
		}
		else {
			printf("틀렸습니다. 정답은 %s입니다.\n\n", word);

		}
	}
	fclose(file);
		return 0;
}