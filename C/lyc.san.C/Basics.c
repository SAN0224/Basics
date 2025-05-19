#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma region 정리코드
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
	printf("반 : B\n");
	printf("학번: 202508038\n");
	printf("이름: 이윤창\n");
	return 0;
}
#endif

#if 0
int main(void)
{
	printf("**교육목표**\n");
	printf("  \n");
	printf("지성인 양성\n");
	printf("직업인 양성\n");
	printf("사회인 양성\n");
	return 0;
}

#endif
#pragma endregion

#pragma region Byte
#if 0

int main(void)
{
	printf("char형: %d 바이트\n", sizeof(char));
	printf("short형: %d 바이트\n", sizeof(short));
	printf("int형: %d 바이트\n", sizeof(int));
	printf("long형: %d 바이트\n", sizeof(long));
	printf("longlong형: %d 바이트\n", sizeof(long long));
	printf("float형: %d 바이트\n", sizeof(float));
	printf("double형: %d 바이트\n", sizeof(double));
	printf("long double형: %d 바이트\n", sizeof(long double));
	return 0;
}

#endif
#pragma endregion

#pragma region Overflow, Underflow
#if 0

오류 코드
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

수정된 코드
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
	char bell = '\a';																							//특수 문자
	printf("%c프로그램을 시작합니다.\n", bell);										// 경고음 발생
	printf("%c:\\work\\chap03\\Ex03_06\\Debug\n");				// 역슬래시 출력
	printf("\t탭 문자를 출력합니다.\n");													// 탭 문자 출력
	printf("\"이윤창\"\n");

	return 0;
}

#endif
#pragma endregion

#pragma region int, char등 변수
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

#pragma region 매크로 상수
#if 0

#define NAME "조인하"
#define AGE 20
#define PRT printf

int main(void)
{
	printf("이름: %s\n", NAME);
	printf("나이: %d\n", AGE);
	PRT("주소: 인천시 미추홀구\n");

	return 0;
}

#endif
#pragma endregion

#pragma region scanf 함수
#if 0

int main(void)
{
	char gender;
	int num;
	double height, weight;

	printf("성별 입력(남자: M, 여자: F): ");
	scanf("%c", &gender);
	printf("학번 입력: ");
	scanf("%d", &num);
	printf("키, 몸무게 입력: ");
	scanf("%lf %lf", &height, &weight);

	printf("성별은 %c, 학번은 %d, 키는 %.1fcm, 몸무게는 %.1fkg\n", gender, num, height, weight);

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

	printf("반(1,2,3) 입력: ");
	scanf("%d", &ban);
	printf("이름 입력: ");
	scanf("%s", &name);
	printf("C 점수, 등급(A, B, C, F) 입력: ");
	scanf("%lf %c", &C, &grade);

	printf("%d반, %s, %.1f점, %c\n", ban, name, C, grade);

	return 0;
}

#endif
#pragma endregion

#pragma region 연산자, result
#if 0

int main(void)
{
	int year, result;
	// printf("윤년은 1, 평년은 0 출력 \n");
	printf("연도 입력: ");
	scanf("%d", &year);
	result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	printf("입력한 %d년은 %s에 해당합니다. \n", year, result == 1 ? "윤년" : "평년");

	return 0;
}
#endif

#if 0

int main(void)
{
	char gender;
	int c = 95;
	printf("성별 입력(남자: M,  여자: F): ");
	scanf("%c", &gender);
	printf("C언어는 %s\n", c >= 80 ? "통과" : "재시험");
	printf("성별은 %s 입니다. \n", gender == 'M' || gender == 'm' ? "남자" : "여자");

	return 0;
}

#endif
#pragma endregion

#pragma region 조건 연산자
#if 0

int main(void)
{
	char area;
	int n1 = 3, n2 = 7, kor = 85;
	printf("지역 입력(서울: S, 인천: I): ");
	scanf("%c", &area);
	n1 > n2 ? n1-- : n2--;
	printf("n1 = %d, n2 = %d\n", n1, n2);
	printf("지역은 %s입니다.\n", area=='S'?"서울":"인천");
	printf("국어는 %s 입니다.\n", kor <= 70 ? "불합격" : "합격");
	return 0;
}

#endif
#pragma endregion

#pragma region if / else 조건문
#if 0

int main(void)
{
	int gender;
	int c = 95;
	printf("성별 입력(남자: 1, 여자: 2): ");
	scanf("%d", &gender);
	printf("성별은 ");
	if (gender == 1)
	{
		printf("남자\n");
	}
	else
	{
		printf("여자\n");
	}
	printf("C 언어는 ");
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

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	printf("입력한 수 %d는(은) ", num);
	if (num % 2 == 0)
	{
		printf("짝수\n");
	}
	else
	{
		printf("홀수\n");
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

		printf("반(1, 2, 3) 입력: ");
		scanf("%d", &ban);
		printf("이름 입력: ");
		scanf("%s", name);
		printf("C점수 입력: ");
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

		printf("%d반, %s, %.1f점, %c\n", ban, name, c, grade);
		return 0;

}

#endif
#pragma endregion

#pragma region switch
#if 0

int main(void)
{
	int rank, p_money;
	printf("등수 입력: ");
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
	printf("%d등은 상금 %d원\n", rank, p_money);
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
		printf("성별 입력(남자: M, 여자: F): ");
		scanf("%c", &gender);
		printf("학번 입력: ");
		scanf("%d", &num);
		printf("키, 몸무게 입력: ");
		scanf("%lf %lf", &height, &weight);
		printf("성별은 %c, 학번은 %d, 키는 %.1fcm, 몸무게는 %.1fkg\n", gender, num, height, weight);
		bmi = weight / (height * height) * 10000;
		printf("BMI는 %.1f ", bmi);
		if (bmi < 18.5)
		{
			printf("저체중");
		}
		else if (bmi < 23)
		{
			printf("정상");
		}
		else if (bmi < 25)
		{
			printf("과체중");
		}
		else
		{
			printf("심각한 비만");
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
	printf("학점을 입력하시오(A, B, C, D, F): ");
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
		printf("잘못 입력하셨습니다\n");
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
	printf("1부터 10까지의 합: %d\n", sum);
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
	printf("500부터 1000까지의 홀수의 합: %d\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Echo
#if 0

int main(void)
{
	int i, num, sum = 0;
	printf("값 입력: ");
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
		sum += i;
	printf("1부터 %d까지의 합: %d\n", num, sum);
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
	printf("1부터 10까지의 홀수의 합: %d\n", sum1);
	printf("1부터 10까지의 짝수의 합: %d\n", sum2);
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
	printf("1부터 10까지의 합: %d\n", sum);
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
	printf("500부터 1000까지의 홀수의 합: %d\n", sum);
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
		printf("성별 입력(남자: M, 여자: F): ");
		scanf(" %c", &gender);
		printf("학번 입력: ");
		scanf("%d", &num);
		printf("키, 몸무게 입력: ");
		scanf("%lf %lf", &height, &weight);
		printf("성별은 %c, 학번은 %d, 키는 %.1fcm, 몸무게는 %.1fkg\n", gender, num, height, weight);
		bmi = weight / (height * height) * 10000;
		printf("BMI는 %.1f ", bmi);
		if (bmi < 18.5)
		{
			printf("저체중\n");
		}
		else if (bmi < 23)
		{
			printf("정상\n");
		}
		else if (bmi < 25)
		{
			printf("과체중\n");
		}
		else
		{
			printf("심각한 비만\n");
		}
		printf("게속 하시겠습니까(Y/N)? ");
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
	printf("몇 단? ");
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
		printf("정수를 입력하시오(0이면 종료) : ");
		scanf("%d", &a);
		sum += a;
	} while (a != 0);
	printf("정수의 합: %d\n", sum);
	return 0;
}

#endif
#pragma endregion

#pragma region Mike(Test)
#if 0

int main(void)
{
	int count, i = 1;
	printf("정수를 입력하시오: ");
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
		printf("정수 2개를 입력하시오(0 0 입력하면 종료): ");
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
	printf("11부터 20까지 짝수의 합은 %d이다.\n", sum);
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
	printf("가로, 세로 길이 입력: ");
	scanf("%d %d", &w, &h);
	get_perimeter(w, h);
	print_line();
	printf("한 변의 길이? ");
	scanf("%lf", &len);
	result = get_area_of_square(len);
	printf("정사각형의 면적: %.1f\n", result);
	return 0;
}

void print_line(void)
{
	printf("-------------------------------------\n");
}
void get_perimeter(int width, int height)
{
	printf("직사각형의 둘레: %d\n", 2*(width+height));
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
		printf("번호 입력(0입력하면 종료): ");
		scanf("%d", &num);
		if (num == 0)    break;
		printf("이름 입력: ");
		scanf("%s", name);
		printf("국어, 영어, 수학 점수 입력: ");
		scanf("%d %d %d", &kor, &eng, &math);
		avg = average(kor, eng, math);
		grade = get_grade(avg);
		printf("%d번, %s, 평균: %.1f, 등급 : %c\n", num, name, avg, grade);
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
		printf("정수를 입력하시오.");
		scanf("%d", &test[i]);
	}

	for (i = 0; i < TEST_SIZE; i++)
	{
		printf("test[%d]은 %d\n", i, test[i]);
		sum += test[i];
	}
	printf("배열 원소들의 합: %d\n", sum);

	for (i = 0; i < TEST_SIZE; i++)
	{
		test2[i] = test[i];
		printf("test2[%d]은 %d\n", i, test[i]);
		
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
		printf("성적을 입력하시오: ");
		scanf("%d", &score[i]);
	}

	for (i = 0; i < SCORE_SIZE; i++)
	{
		tot += score[i];
		printf("%d번 성적: %d\n", i+1, score[i]);
	}

	avg = (double)tot / 4;
	printf("총점: %d\n", tot);
	printf("평균: %.1f\n", avg);

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