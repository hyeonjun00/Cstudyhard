#include <stdio.h>

struct book {
	int id;
	char* title;
	int available;
};



int main(void){
	int input;
	struct book books[4] = {  //books 구조체 생성
		{1,"C 입문편", 1},
		{2, "파이썬 기본편", 1},
		{3, "자바 기본편", 1},
		{4, "파이썬 중급편", 1}
	};
	
	while (1) {
		
		struct book * bookPtr;
		bookPtr = &books;
		char * available = "대출 가능";
		char * unavailable = "대출 중";
		printf("젼체 도서 목록입니다.\n");
		printf("===================================\n");
		for (int i = 0; i < 4; i++){
			printf("%d. %-16s", bookPtr[i].id, bookPtr[i].title);
			if (bookPtr[i].available) {  //1 == True
				printf("[%s]\n", available);
			}
			else{
				printf("[%s]\n", unavailable);
			}
		}
		printf("=================================\n");
		printf("대출/반납할 책 번호를 입력하세요(종료하려면 -1입력) :");
		scanf("%d", &input);
		if (input == -1) {
			printf("프로그램을 종료합니다.\n\n");
			exit(0);
		}
		if (input < 1 || input > 4) {
			printf("잘못된 입력입니다.\n\n");
			continue;
		}
		input -= 1; //인덱스는 0부터
		if (books[input].available == 0) {
			printf("'%s' 반납이 완료되었습니다.\n\n", books[input].title);
			books[input].available = 1;
		}
		else {
			printf("'%s' 대출이 완료되었습니다.\n\n", books[input].title);
			books[input].available = 0;
		}

	
	}

	return 0;
}
