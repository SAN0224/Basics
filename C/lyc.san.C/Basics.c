#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma region �����ڵ�
#if 0

int main(void)
{

}

#endif
#pragma endregion

#pragma region Printf
#if 0

int main(void)
{
	printf("�� : B\n");
	printf("�й�: 202508038\n");
	printf("�̸�: ����â\n");
	return 0;
}
#endif

#if 0
int main(void)
{
	printf("**������ǥ**\n");
	printf("  \n");
	printf("������ �缺\n");
	printf("������ �缺\n");
	printf("��ȸ�� �缺\n");
	return 0;
}

#endif
#pragma endregion

#pragma region Byte
#if 0

int main(void)
{
	printf("char��: %d ����Ʈ\n", sizeof(char));
	printf("short��: %d ����Ʈ\n", sizeof(short));
	printf("int��: %d ����Ʈ\n", sizeof(int));
	printf("long��: %d ����Ʈ\n", sizeof(long));
	printf("longlong��: %d ����Ʈ\n", sizeof(long long));
	printf("float��: %d ����Ʈ\n", sizeof(float));
	printf("double��: %d ����Ʈ\n", sizeof(double));
	printf("long double��: %d ����Ʈ\n", sizeof(long double));
	return 0;
}

#endif
#pragma endregion

#pragma region Overflow, Underflow
#if 0

���� �ڵ�
int main(void)
{
	char n = 128;
	unsigned char m = 256;
	char x = -129;
	unsigned char y = -1;

	printf("n = %d\n", n);
	printf("m = %d\n", m);
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}

#endif

#if 0

������ �ڵ�
int main(void)
{
	short n = 128;
	unsigned short m = 256;
	short x = -129;
	char y = -1;

	printf("n = %d\n", n);
	printf("m = %d\n", m);
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}

#endif
#pragma endregion

#pragma region Escape Sequence
#if 0

int main(void)
{
	char bell = '\a';																							//Ư�� ����
	printf("%c���α׷��� �����մϴ�.\n", bell);										// ����� �߻�
	printf("%c:\\work\\chap03\\Ex03_06\\Debug\n");				// �������� ���
	printf("\t�� ���ڸ� ����մϴ�.\n");													// �� ���� ���
	printf("\"����â\"\n");

	return 0;
}

#endif
#pragma endregion

#pragma region int, char�� ����
#if 0

int main(void)
{
	char choice = '2';
	int amount = 10, price = 2000;
	double discount;
	discount = 0.1;

	printf("%c\n", choice);
	printf("%d, %d\n", amount, price);
	printf("%f\n", discount);

	return 0;
}

#endif
#pragma endregion

#pragma region ��ũ�� ���
#if 0

#define NAME "������"
#define AGE 20
#define PRT printf

int main(void)
{
	printf("�̸�: %s\n", NAME);
	printf("����: %d\n", AGE);
	PRT("�ּ�: ��õ�� ����Ȧ��\n");

	return 0;
}

#endif
#pragma endregion

#pragma region scanf �Լ�
#if 0

int main(void)
{
	char gender;
	int num;
	double height, weight;

	printf("���� �Է�(����: M, ����: F): ");
	scanf("%c", &gender);
	printf("�й� �Է�: ");
	scanf("%d", &num);
	printf("Ű, ������ �Է�: ");
	scanf("%lf %lf", &height, &weight);

	printf("������ %c, �й��� %d, Ű�� %.1fcm, �����Դ� %.1fkg\n", gender, num, height, weight);

	return 0;
}

#endif

#if 0

int main(void)
{
	int ban;
	char name[20];
	double C;
	char grade;

	printf("��(1,2,3) �Է�: ");
	scanf("%d", &ban);
	printf("�̸� �Է�: ");
	scanf("%s", &name);
	printf("C ����, ���(A, B, C, F) �Է�: ");
	scanf("%lf %c", &C, &grade);

	printf("%d��, %s, %.1f��, %c\n", ban, name, C, grade);

	return 0;
}

#endif
#pragma endregion

#pragma region ������, result
#if 0

int main(void)
{
	int year, result;
	// printf("������ 1, ����� 0 ��� \n");
	printf("���� �Է�: ");
	scanf("%d", &year);
	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("�Է��� %d���� %s�� �ش��մϴ�. \n", year, result == 1 ? "����" : "���");

	return 0;
}
#endif

#if 0

int main(void)
{
	char gender;
	int c = 95;
	printf("���� �Է�(����: M,  ����: F): ");
	scanf("%c", &gender);
	printf("C���� %s\n", c >= 80 ? "���" : "�����");
	printf("������ %s �Դϴ�. \n", gender == 'M' || gender == 'm' ? "����" : "����");

	return 0;
}

#endif
#pragma endregion