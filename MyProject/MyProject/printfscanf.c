#include <stdio.h>

int main_printfscanf() {
	//������ ������ ���� ����
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);
	*/

	//�Ǽ��� ������ ���� ����
	/*float f = 46.5f;
	printf("%.2f\n", f);	//�Ҽ��� ��°�ڸ�����.
	double d = 4.428;
	printf("%.2lf\n", d);	//4.43
	*/
	/*
	const int YEAR = 2000;	//����� ����
	printf("�¾ �⵵ : %d\n", YEAR);
	*/

	//printf
	//����
	/*
	int add = 3 + 7; //10
	printf("3 + 7 = %d\n", add);
	printf("%d * %d = %d\n", 30, 79, 30 * 79);
	*/

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/*
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);	//& input�̶�� ������ ���ǵ� ���� ���� �Է¹ްڴٶ�� ��.
	printf("�Է°� : %d\n", input);
	*/

	/*
	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);
	*/

	//����(�� ����), ���ڿ� (�� ���� �̻��� ���� ����)
	/*
	char c = 'A';
	printf("%c\n", c);
	*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));		//sizeof 256�� ������ ���� �ްڴ�.
	printf("%s\n", str);
	*/

	// ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? Ű? ���˸�?

	char name[10];
	printf("�̸��� ������?\n");
	scanf_s("%s", name, sizeof(name));
	int age;
	printf("����̿��� ?\n");
	scanf_s("%d", &age);
	float weight;
	printf("�����Դ¿�?\n");
	scanf_s("%f", &weight);
	float height;
	printf("Ű�¿�?\n");
	scanf_s("%f", &height);
	char crime[256];
	printf("���˸�����?");
	scanf_s("%s", crime, sizeof(crime));
	
	printf("����� �̸��� %s�̸�,\n���̴� %d�̰�\n�����Դ� %.2f�̸�\n,Ű�� %.2f�̴�.\n���˸��� %s�̴�.", name, age, weight, height, crime);
	

	return 0;
}