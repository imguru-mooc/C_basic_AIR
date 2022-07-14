#if 1
#include <stdio.h>

int factorial(int n);

int main()
{
	int fact = 1;

	fact = factorial(5);
	printf("5! = %d\n", fact);
	return 0;
}

int factorial(int n)
{
	if (n == 1)
		return 1;
	return n * factorial(n-1);  //  n! => n * (n-1)!
}
#endif



#if 0
#include <stdio.h>

int factorial(int n);

int main()
{
	int fact = 1;
	
	fact = factorial(5);
	printf("5! = %d\n", fact);
	return 0;
}

int factorial(int n)
{
	int i;
	int fact = 1;
	for (i = 0; i < n; i++)
		fact *= i + 1;
	return fact;
}
#endif

#if 0
#include <stdio.h>

void input(int(*a)[5]);
void output(int(*a)[5]);

int main()
{
	int a[5][5];
	input(a);
	output(a);
	return 0;
}

void input(int (*a)[5])
{
	int i, j;
	int count = 0;
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			a[i][j] = ++count;
}

void output(int (*a)[5])
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a[5][5];
	int i, j;
	int count = 0;

	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			a[i][j] = ++count;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	return 0;
}

#endif


#if 0
#include <stdio.h>

void input(int* a);
void output(int* a);

int main()
{
	int a[5];

	input(a);
	output(a);
	return 0;
}
void input(int* a)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d 데이터 입력 : ", i);
		scanf("%d", &a[i]);
	}
}
void output(int* a)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}

#endif


#if 0
#include <stdio.h>

int main()
{
	int a[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d 데이터 입력 : ", i);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}

#endif



#if 0
#include <stdio.h>

void circle_calc(int r, float *area, float *round); // 함수의 선언부

int main()
{
	int r;
	float area, round;
	printf("반지름 입력 : ");
	scanf("%d", &r);
	circle_calc(r, &area, &round);
	printf("원의 면적은 %f입니다.\n", area);
	printf("원의 둘레는 %f입니다.\n", round);
	return 0;
}

void circle_calc(int r, float* area, float* round)  // 함수의 구현부
{
	*area =  r * r * 3.14f;
	*round = 2 * r * 3.14f;
}

#endif



#if 0
#include <stdio.h>

float circle_area(int r); // 함수의 선언부

int main()
{
	int r;
	float area;
	printf("반지름 입력 : ");
	scanf("%d", &r);
	area = circle_area(r);
	printf("원의 면적은 %f입니다.\n", area);
	return 0;
}

float circle_area(int r)   // 함수의 구현부
{
	return r * r * 3.14f;
}

#endif


#if 0
#include <stdio.h>

void swap(int *a, int *b); // 함수의 선언부

int main()
{
	int a = 3, b = 4;
	swap(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}

void swap(int *a, int *b)   // 함수의 구현부
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

#endif


#if 0
#include <stdio.h>

void swap(int a, int b); // 함수의 선언부

int main()
{
	int a = 3, b = 4;
	swap(a, b);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}

void swap(int a, int b)   // 함수의 구현부
{
	int t;

	t = a;
	a = b;
	b = t;
	printf("swap() : a=%d, b=%d\n", a, b);
}

#endif

#if 0
#include <stdio.h>

void func(int *num);  // 함수의 선언부

int main()
{
	int num = 10;
	func(&num);       // 함수의 호출부
	return 0;
}

void func(int *num)   // 함수의 구현부
{
	printf("num : %d\n", *num);
}
#endif




#if 0
#include <stdio.h>

void func(int num);  // 함수의 선언부

int main()
{
	int num = 10;
	func(num);       // 함수의 호출부
	return 0;
}

void func(int num)   // 함수의 구현부
{
	printf("num : %d\n", num);
}
#endif


#if 0
#include <stdio.h>

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}
int main()
{
	int a, b, sum;

	scanf("%d %d", &a, &b);
	sum = add(a, b);
	printf("%d + %d = %d\n", a, b, sum);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, b, sum;

	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);
	return 0;
}
#endif



#if 0
#include <stdio.h>

void print_star(int num)
{
	int i;

	for (i = 0; i < num; i++)
		printf("*");
	printf("\n");
	//printf("**********\n");
}

int main()
{
	print_star(10);
	printf("hello\n");
	print_star(5);
	printf("hi\n");
	print_star(20);
	printf("good bye\n");
	print_star(2);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main() 
{
	printf("**********\n");
	printf("hello\n");
	printf("**********\n");
	printf("hi\n");
	printf("**********\n");
	printf("good bye\n");
	printf("**********\n");
	return 0;
}
#endif

#if 0

#include <stdio.h>

int main() {
	int month_day[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},
							 {31,29,31,30,31,30,31,31,30,31,30,31} };

	char *week[7] = { "일", "월", "화", "수", "목", "금", "토"};
	int year, month;
	int total = 0;
	int i;
	int leap_year;
	int temp_day[42] = { 0, };
	int start_idx;

	printf("년 월 입력 : ");
	scanf("%d %d", &year, &month);

	for (i = 1; i < year; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			total += 366;
		else
			total += 365;
	}

	leap_year = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	for (i = 0; i < month - 1; i++)
		total += month_day[leap_year][i];

	//int temp_day[42] = { 0, };
	//int start_idx;
	start_idx = (total + 1) % 7;
	for (i = 0; i < month_day[leap_year][month - 1]; i++)
		temp_day[i+start_idx] = i + 1;

	printf("%d년 %d월\n", year, month);
	for (i = 0; i < 7; i++)
		printf("%4s", week[i]);
	printf("\n");

	for (i = 0; i < 42; i++)
	{
		if (temp_day[i] != 0)
			printf("%4d", temp_day[i]);
		else
			printf("%4s", " ");
		if ((i + 1) % 7 == 0)
			printf("\n");
	}

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main() {
	int month_day[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},
							 {31,29,31,30,31,30,31,31,30,31,30,31} };
	int b_year, b_month, b_day;
	int year, month, day;
	int total = 0;
	int i;
	int b_leap_year;
	int leap_year;

	printf("태어난 년 월 일 입력 : ");
	scanf("%d %d %d", &b_year, &b_month, &b_day);

	printf("현재 년 월 일 입력 : ");
	scanf("%d %d %d", &year, &month, &day);

	b_leap_year = (b_year % 4 == 0 && b_year % 100 != 0) || b_year % 400 == 0;

	for (i = b_month; i < 12; i++)
		total += month_day[b_leap_year][i];

	total += month_day[b_leap_year][b_month-1] - b_day;

	for (i = b_year + 1; i < year; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
			total += 366;
		else
			total += 365;
	}

	leap_year = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
	for (i = 0; i < month - 1; i++)
		total += month_day[leap_year][i];
	total += day;
	printf("%d월 %d일은 %d번째 일입니다.\n", month, day, total);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main() {
	int month_day[2][12] = { {31,28,31,30,31,30,31,31,30,31,30,31},
						     {31,29,31,30,31,30,31,31,30,31,30,31} };
	int year, month, day;
	int total = 0;
	int i;

	printf("년 월 일 입력 : ");
	scanf("%d %d %d", &year, &month, &day);

	for (i = 0; i < month - 1; i++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			total += month_day[1][i];
		else
			total += month_day[0][i];
	}
	total += day;
	printf("%d월 %d일은 %d번째 일입니다.\n", month, day, total);

	return 0;
}
#endif



#if 0
#include <stdio.h>
#include <string.h>
int main(){
	char* name[5] = { "kim", "lee", "park", "choi", "moon" };
	char* t;
	int i,j;
	int n = 5;

	for (i = 0; i < n; i++)
		printf("%8s", name[i]);
	printf("\n");

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(name[j], name[j + 1]) > 0)
			{
				t = name[j];
				name[j] = name[j + 1];
				name[j + 1] = t;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%8s", name[i]);
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char buff[100];
	char c;
	int i;

	printf("문자열 입력 :");
	gets(buff);

	printf("찾을 문자 입력 : ");
	scanf("%c", &c);

	for (i = 0;; i++)
	{
		if (buff[i] == c)
		{
			printf("%c 문자는 %d번째 있습니다.\n", c, i);
			break;
		}

		if (buff[i] == 0)

		{
			printf("찾는 문자가 없습니다.\n");
			break;
		}
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char buff[100];
	int i;

	printf("문자열 입력 :");
//	scanf("%s", buff);
	gets(buff);

	for (i = 0; buff[i] != 0; i++)
	{
		if ('a' <= buff[i] && buff[i] <= 'z')
			buff[i] -= 'a' - 'A';
	}

	printf("%s\n", buff);


	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int n;
	int a[100] = { 0, };
	int i, j;
	int t;

	printf("숫자 개수를 입력 : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int data = 3;
	int* p1 = &data;
	int** p2 = &p1;
	int*** p3 = &p2;
	printf("&p1=%p, p1=%p, *p=%d\n", &p1, p1, *p1);
	printf("&p2=%p, p2=%p, **p2=%d\n", &p2, p2, **p2);
	printf("&p3=%p, p3=%p, ***p3=%d\n", &p3, p3, ***p3);
	return 0;
}
#endif