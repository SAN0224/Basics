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

#pragma region Juliett(Test)
#if 0

int main(void)
{
	int i;
	for (i = 30; i >= 20; i -= 2)
		printf("%d ", i);
	printf("\n");
	return 0;
}

#endif
#pragma endregion

#pragma region Kilo(Test)
#if 0

int main(void)
{
	int i, dan;
	printf("�� ��? ");
	scanf("%d", &dan);
	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", dan, i, dan * i);
	return 0;
}

#endif
#pragma endregion

#pragma region Lima(Test)
#if 0

int main(void)
{
	int a, sum = 0;
	do
	{
		printf("������ �Է��Ͻÿ�(0�̸� ����) : ");
		scanf("%d", &a);
		sum += a;
	} while (a != 0);
	printf("������ ��: %d\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Mike(Test)
#if 0

int main(void)
{
	int count, i = 1;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &count);
	while (1)
	{
		printf("%d\n", i);
		if (i == count)
		{
			break;
		}
		i++;
	}
	return 0;
}

#endif
#pragma endregion

#pragma region November(Test)
#if 0

int main(void)
{
	int num1, num2;
	while (1)
	{
		printf("���� 2���� �Է��Ͻÿ�(0 0 �Է��ϸ� ����): ");
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0)
		{
			break;
		}
		printf("%d + %d = %d\n", num1, num2, num1 + num2);
	}
	return 0;
}

#endif
#pragma endregion

#pragma region Oscar(Test)
#if 0

int main(void)
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		if (i % 4 == 0)
			continue;
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}

#endif
#pragma endregion

#pragma region Papa(Test)
#if 0

int main(void)
{
	int i, sum = 0;
	for (i = 11; i <= 20; i++)
	{
		if (i % 2 == 1)
			continue;
		sum += i;
	}
	printf("11���� 20���� ¦���� ���� %d�̴�.\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Quebec
#if 0

void print_line(void);
void get_perimeter(int width, int height);
double get_area_of_square(double length);

int main(void)
{
	int w = 0, h = 0;
	double len, result;
	printf("����, ���� ���� �Է�: ");
	scanf("%d %d", &w, &h);
	get_perimeter(w, h);
	print_line();
	printf("�� ���� ����? ");
	scanf("%lf", &len);
	result = get_area_of_square(len);
	printf("���簢���� ����: %.1f\n", result);
	return 0;
}

void print_line(void)
{
	printf("-------------------------------------\n");
}
void get_perimeter(int width, int height)
{
	printf("���簢���� �ѷ�: %d\n", 2*(width+height));
}
double get_area_of_square(double length)
{
	return length * length;
}

#endif
#pragma endregion

#pragma region Romeo
#if 0

double average(int s1, int s2, int s3);
char get_grade(double avg);
void draw_line(char ch, int len);

int main(void)
{
	char name[20];       
	int  num, kor, eng, math;
	double avg;     
	char  grade;
	
	while (1) 
	{
		printf("��ȣ �Է�(0�Է��ϸ� ����): ");
		scanf("%d", &num);
		if (num == 0)    break;
		printf("�̸� �Է�: ");
		scanf("%s", name);
		printf("����, ����, ���� ���� �Է�: ");
		scanf("%d %d %d", &kor, &eng, &math);
		avg = average(kor, eng, math);
		grade = get_grade(avg);
		printf("%d��, %s, ���: %.1f, ��� : %c\n", num, name, avg, grade);
		draw_line('~', 40);
	}
	return 0;
}

double average(int s1, int s2, int s3)
{
	return (double)(s1 + s2 + s3) / 3;
}

char get_grade(double avg)
{
	if (avg >= 90) return 'A';
	else if (avg >= 80) return 'B';
	else if (avg >= 70) return 'C';
	else return 'F';
}

void draw_line(char ch, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%c", ch);
	printf("\n");
}
#endif
#pragma endregion

#pragma region Sierra
#if 0

#define TEST_SIZE 3 

int main(void)
{
	int test[TEST_SIZE];
	int i, smu = 0;

	return 0;
}

#endif
#pragma endregion

#pragma region Tango
#if 0

#define TEST_SIZE 3

int main(void)
{
	int test[TEST_SIZE] = { 10, 20, 30 };
	int test2[TEST_SIZE] = {0};
	int i, sum = 0;

	test[2] = 40;

	for (i = 0; i < TEST_SIZE; i++)
	{
		printf("������ �Է��Ͻÿ�.");
		scanf("%d", &test[i]);
	}

	for (i = 0; i < TEST_SIZE; i++)
	{
		printf("test[%d]�� %d\n", i, test[i]);
		sum += test[i];
	}
	printf("�迭 ���ҵ��� ��: %d\n", sum);

	for (i = 0; i < TEST_SIZE; i++)
	{
		test2[i] = test[i];
		printf("test2[%d]�� %d\n", i, test[i]);
		
	}

	return 0;
}

#endif
#pragma endregion

#pragma region Uniform
#if 0

#define SCORE_SIZE 4

int main(void)
{
	int score[SCORE_SIZE] = { 0 };
	int tot = 0, i;
	double avg;

	for (i = 0; i < SCORE_SIZE; i++)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &score[i]);
	}

	for (i = 0; i < SCORE_SIZE; i++)
	{
		tot += score[i];
		printf("%d�� ����: %d\n", i+1, score[i]);
	}

	avg = (double)tot / 4;
	printf("����: %d\n", tot);
	printf("���: %.1f\n", avg);

	return 0;
}

#endif
#pragma endregion

#pragma region 	Victor
#if 0

#define ROW 3
#define COL 5

int main(void)
{
	int arr[ROW][COL] = { {1,2,3,4,5},{11,12,13,14},{21,22,23} };
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	return 0;
}

#endif
#pragma endregion

#pragma region Whiskey
#if 1

int main(void)
{
	int a = 3;
	float b = 10.5;

	int* pa;
	pa = &a;
	float* pb = &b;

	return 0;
}

#endif
#pragma endregion

#pragma region Xray
#if 0

int main(void)
{

}

#endif
#pragma endregion

#pragma region Yankee
#if 0

int main(void)
{

}

#endif
#pragma endregion

#pragma region Zulu
#if 0

int main(void)
{

}

#endif
#pragma endregion