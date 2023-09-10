#include <stdio.h>

int main(void) {
	
	// 2중 반복문
	/*
	for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("      두 번째 반복문  :  %d\n", j);
		}
	}
	*/
	// 구구단
	/*
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);

		}
		printf("========\n");
	}
	*/
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	*/
	for (int i = 0; i < 5; i++) {	
		for (int j = i; j < 5-1; j++) {	// 뛰어쓰기 갯수
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}