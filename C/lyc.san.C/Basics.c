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

#pragma region ���� ������
#if 0

int main(void)
{
	char area;
	int n1 = 3, n2 = 7, kor = 85;
	printf("���� �Է�(����: S, ��õ: I): ");
	scanf("%c", &area);
	n1 > n2 ? n1-- : n2--;
	printf("n1 = %d, n2 = %d\n", n1, n2);
	printf("������ %s�Դϴ�.\n", area=='S'?"����":"��õ");
	printf("����� %s �Դϴ�.\n", kor <= 70 ? "���հ�" : "�հ�");
	return 0;
}

#endif
#pragma endregion

#pragma region if / else ���ǹ�
#if 0

int main(void)
{
	int gender;
	int c = 95;
	printf("���� �Է�(����: 1, ����: 2): ");
	scanf("%d", &gender);
	printf("������ ");
	if (gender == 1)
	{
		printf("����\n");
	}
	else
	{
		printf("����\n");
	}
	printf("C ���� ");
	if (c >= 80)
	{
		printf("PASS\n");
	}
	else
	{
		printf("Non-Pass\n");
	}
	return 0;
}

#endif

#if 0

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	printf("�Է��� �� %d��(��) ", num);
	if (num % 2 == 0)
	{
		printf("¦��\n");
	}
	else
	{
		printf("Ȧ��\n");
	}

	return 0;
}

#endif
#pragma endregion

#pragma region if / else if
#if 0

int main(void)
{
		int ban;
		double c;
		char name[20];
		char grade;

		printf("��(1, 2, 3) �Է�: ");
		scanf("%d", &ban);
		printf("�̸� �Է�: ");
		scanf("%s", name);
		printf("C���� �Է�: ");
		scanf("%lf", &c);

		if (c >= 90)
		{
			grade = 'A';
		}
		else if(c >= 80)
		{
			grade = 'B';
		}
		else if(c >= 70)
		{
			grade = 'C';
		}
		else
		{
			grade = 'F';
		}

		printf("%d��, %s, %.1f��, %c\n", ban, name, c, grade);
		return 0;

}

#endif
#pragma endregion

#pragma region switch
#if 0

int main(void)
{
	int rank, p_money;
	printf("��� �Է�: ");
	scanf("%d", &rank);
	switch (rank)
	{
	case 1:
		p_money = 1000000;
		break;
	case 2:
		p_money = 500000;
		break;
	case 3:
		p_money = 200000;
		break;
	default:
		p_money = 0;
	}
	printf("%d���� ��� %d��\n", rank, p_money);
	return 0;
}

#endif
#pragma endregion

#pragma region Alpha
#if 0

int main(void)
{
		char gender;
		int num;
		double height, weight, bmi;
		printf("���� �Է�(����: M, ����: F): ");
		scanf("%c", &gender);
		printf("�й� �Է�: ");
		scanf("%d", &num);
		printf("Ű, ������ �Է�: ");
		scanf("%lf %lf", &height, &weight);
		printf("������ %c, �й��� %d, Ű�� %.1fcm, �����Դ� %.1fkg\n", gender, num, height, weight);
		bmi = weight / (height * height) * 10000;
		printf("BMI�� %.1f ", bmi);
		if (bmi < 18.5)
		{
			printf("��ü��");
		}
		else if (bmi < 23)
		{
			printf("����");
		}
		else if (bmi < 25)
		{
			printf("��ü��");
		}
		else
		{
			printf("�ɰ��� ��");
		}

		return 0;
}

#endif
#pragma endregion

#pragma region Bravo
#if 0

int main(void)
{
	char grade;
	printf("������ �Է��Ͻÿ�(A, B, C, D, F): ");
	scanf("%c", &grade);
	switch (grade)
	{
	case 'A':
		printf("Excellent!\n");
		break;
	case 'B':

	case 'C':
		printf("Good\n");
		break;
	case 'D':
		printf("Poor\n");
		break;
	case 'F':
		printf("Fail\n");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�\n");
		break;
	}
	return 0;
}

#endif
#pragma endregion

#pragma region Charlie
#if 0

int main(void)
{
	int sum = 0;
	int i;
	for (i=1; i<=10; i++)
		sum += i;
	printf("1���� 10������ ��: %d\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Delta
#if 0

int main(void)
{
	int sum = 0;
	int i;
	for (i = 501; i <= 1000; i+=2)
		sum += i;
	printf("500���� 1000������ Ȧ���� ��: %d\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Echo
#if 0

int main(void)
{
	int i, num, sum = 0;
	printf("�� �Է�: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
		sum += i;
	printf("1���� %d������ ��: %d\n", num, sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Foxtrot
#if 0

int main(void)
{
	int sum1 = 0, sum2 = 0;
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 1)
			sum1 += i;
		else
			sum2 += i;
	}
	printf("1���� 10������ Ȧ���� ��: %d\n", sum1);
	printf("1���� 10������ ¦���� ��: %d\n", sum2);
	return 0;
}

#endif
#pragma endregion

#pragma region Golf
#if 0

int main(void)
{
	int sum = 0;
	int i;
	i = 1;
	while (i <= 10)
	{
		sum += i;
		i++;
	}
	printf("1���� 10������ ��: %d\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Hotel
#if 0

int main(void)
{
	int sum = 0;
	int i;
	i = 501;
	while (i <= 1000)
	{
		sum += i;
		i+=2;
	}
	printf("500���� 1000������ Ȧ���� ��: %d\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region India
#if 0

int main(void)
{
	char gender;
	int num;
	double height, weight, bmi;
	char yesno = 'Y';
	while (yesno == 'Y' || yesno == 'y')
	{
		printf("���� �Է�(����: M, ����: F): ");
		scanf(" %c", &gender);
		printf("�й� �Է�: ");
		scanf("%d", &num);
		printf("Ű, ������ �Է�: ");
		scanf("%lf %lf", &height, &weight);
		printf("������ %c, �й��� %d, Ű�� %.1fcm, �����Դ� %.1fkg\n", gender, num, height, weight);
		bmi = weight / (height * height) * 10000;
		printf("BMI�� %.1f ", bmi);
		if (bmi < 18.5)
		{
			printf("��ü��\n");
		}
		else if (bmi < 23)
		{
			printf("����\n");
		}
		else if (bmi < 25)
		{
			printf("��ü��\n");
		}
		else
		{
			printf("�ɰ��� ��\n");
		}
		printf("�Լ� �Ͻðڽ��ϱ�(Y/N)? ");
		scanf(" %c", &yesno);
	}

	return 0;
}

#endif
#pragma endregion