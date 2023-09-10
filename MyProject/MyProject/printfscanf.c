#include <stdio.h>

int main_printfscanf() {
	//정수형 변수에 대한 예제
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	*/

	//실수형 변수에 대한 예제
	/*float f = 46.5f;
	printf("%.2f\n", f);	//소수점 둘째자리까지.
	double d = 4.428;
	printf("%.2lf\n", d);	//4.43
	*/
	/*
	const int YEAR = 2000;	//상수의 개념
	printf("태어난 년도 : %d\n", YEAR);
	*/

	//printf
	//연산
	/*
	int add = 3 + 7; //10
	printf("3 + 7 = %d\n", add);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	//scanf
	//키보드 입력을 받아서 저장
	/*
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);	//& input이라는 변수가 정의된 곳에 값을 입력받겠다라는 뜻.
	printf("입력값 : %d\n", input);
	*/

	/*
	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);
	*/

	//문자(한 글자), 문자열 (한 글자 이상의 여러 글자)
	/*
	char c = 'A';
	printf("%c\n", c);
	*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));		//sizeof 256개 이하의 값만 받겠다.
	printf("%s\n", str);
	*/

	// 프로젝트
	// 경찰관이 범죄자의 정보를 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 범죄명?

	char name[10];
	printf("이름이 뭐에요?\n");
	scanf_s("%s", name, sizeof(name));
	int age;
	printf("몇살이에요 ?\n");
	scanf_s("%d", &age);
	float weight;
	printf("몸무게는요?\n");
	scanf_s("%f", &weight);
	float height;
	printf("키는요?\n");
	scanf_s("%f", &height);
	char crime[256];
	printf("범죄명은요?");
	scanf_s("%s", crime, sizeof(crime));
	
	printf("당신의 이름은 %s이며,\n나이는 %d이고\n몸무게는 %.2f이며\n,키는 %.2f이다.\n범죄명은 %s이다.", name, age, weight, height, crime);
	

	return 0;
}