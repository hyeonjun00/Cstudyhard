//데이터를 파일에 저장해 입출력하는 방법을 알아보자.
// fputs() fgets() fprintf(), fscanf()


// FILE * 포인터명 = fopen(파일명, 파일모드);



#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS   //매크로를 정의하는 전처리기 지시문. 보안경고를 사용하지 않도록 설정하는 내장 매크로

int main1(void) {
	char line[10000];  //파일에서 읽어 오는 문자열 저장 배열 선언
	FILE* file = fopen("C:\\Users\\USER\\Desktop\\test1.txt", "wb"); // '\'을 표현하기 위해서는 '\\'로 써주어야한다, 파일내용을 그대로 쓰는(w) 바이너리 모드(b) 파일 생성.
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	fputs("fputs()함수로 글을 써 볼게요!\n", file);  //fputs(문자열, 파일포인터)
	fclose(file);  //데이터 손실 방지를 위해 fopen()으로 파일을 열었다면 fclose로 파일을 닫아야 한다. fclose(파일포인터);

	FILE* file1 = fopen("C:\\Users\\USER\\Desktop\\test1.txt", "rb");
	if (file1 == NULL) {
		
		printf("파일열기 실패\n");
		return 1;
	}
	while (fgets(line, 10000, file)!= NULL) {  //fgets(변수명, 문자열최대크기, 파일포인터)
		printf("%s", line);
	}
	fclose(file);

	return 0;
}




//fputs()와 fgets()함수는 문자열 단위로 파일에 데이터를 쓰거나 읽는다. 반면에 fprintf()와 fscanf()함수는 정해진 형식으로 파일에 데이터를 쓰거나 읽는다.
// fprintf(파일포인터,"서식지정자", 값);     fscanf(파일포인터, "서식지정자", %변수명);


int main2(void) {
	char str1[10000];  //추첨번호 문자열 저장 배열 선언
	char str2[10000]; //보너스 번호 문자열 저장 배열 선언
	int num[6] = { 0,0,0,0,0,0 };
	int bonus = 0;
    
	FILE * file = fopen("C:\\Users\\USER\\Desktop\\test2.txt", "wb");
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호", 1, 2, 3, 4, 5, 6);
	fprintf(file, "%s %d\n", "보너스번호", 7);
	fclose(file);
	
	FILE* file1 = fopen("C:\\Users\\USER\\Desktop\\test2.txt", "rb");
	if(file1 == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	fscanf(file1, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	
	fscanf(file1, "%s %d", str2, &bonus);
	printf("%s %d", str2, bonus);

	fclose(file1);

	return 0;
}