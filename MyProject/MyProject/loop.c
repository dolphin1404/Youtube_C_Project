#include <stdio.h>

int main(void) {
	
	// 2�� �ݺ���
	/*
	for (int i = 1; i <= 3; i++) {
		printf("ù ��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("      �� ��° �ݺ���  :  %d\n", j);
		}
	}
	*/
	// ������
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
		for (int j = i; j < 5-1; j++) {	// �پ�� ����
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}