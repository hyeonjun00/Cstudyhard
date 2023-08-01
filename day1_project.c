#define _CRT_SECURE_NO_WARNINGS  //vs에서도 scanf()사용할 수 있게.
//경찰 조서 쓰기
//이름, 나이, 몸무게, 키, 범죄명을 입력받아 출력하는 프로그램 작성

#include <stdio.h>
int main(void) {
	//이름 입력
	char name[256];
	printf("이름입력: ");
	scanf("%s", &name);

	//나이 입력
	int age;
	printf("나이입력: ");
	scanf("%d", &age);

	//몸무게 입력
	float weight;
	printf("몸무게 입력: ");
	scanf("%f", &weight);

	//키 입력 double사용 해보자.
	double height;
	printf("키 입력: ");
	scanf("%lf", &height);

	//범죄 명 입력
	char crime[256];
	printf("범죄 입력: ");
	scanf("%s", crime, sizeof(crime));

	//기본정보 입력 완료, 출력

	printf("\n\n---범죄자 정보---\n");
	printf("이름 : %s\n", name);
	printf("나이 : %d\n", age);
	printf("몸무게: %.1f\n", weight);
	printf("키: %.1lf\n", height);
	printf("범죄명 : %s\n", crime);
	return 0;
}
