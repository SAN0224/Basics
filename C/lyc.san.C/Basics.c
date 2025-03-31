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