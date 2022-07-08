#if 1
#include <stdio.h>

int main()
{
	int i = 1, j = 2, k = -7;
	printf("%d\n", 'a' + 1 < j);
	printf("%d\n", -i - 5 * j >= k+1);
	printf("%d\n", i + j + k == -2 * j);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 15, b = 23;
	printf("%d < %d       : %d\n", a, b, a < b);  
	printf("%d > %d       : %d\n", a, b, a > b);
	printf("%d == %d      : %d\n", a, b, a == b);
	printf("%d != %d      : %d\n", a, b, a != b);
	printf("%d + 8 >= %d  : %d\n", a, b, a + 8 >= b);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	printf("%d\n", -4 + 6 * 5 + 3);   // 1. 6*5
	                                        // 2. -4 + 30
	                                        // 3. 26 + 3
	printf("%d\n", 3 - 7 % 8 + 5);    // 1. 7 % 8
										    // 2. 3 - 7
	                                        // 3. -4 + 5
	printf("%d\n", -5 * 3 % -2 / 4);  // 1. -5*3
										    // 2. -15 % -2 
										    // 3. 1 / 4
	printf("%d\n", (8 + 7) % 6 / 2);  // 1. 8+7
										    // 2. 15 % 6
										    // 3. 3 / 2


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10, b = 3;

	printf("%d + %d = %2d\n", a, b, a + b);
	printf("%d - %d = %2d\n", a, b, a - b);
	printf("%d * %d = %2d\n", a, b, a * b);
	printf("%d / %d = %2d\n", a, b, a / b);
	printf("%d %% %d = %2d\n", a, b, a % b);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char ch1, ch2, ch3, ch4, ch5;

	printf("다섯 문자 입력 : ");
	ch1 = getchar();
	ch2 = getchar();
	ch3 = getchar();
	ch4 = getchar();
	ch5 = getchar();

	printf("%c%c%c%c%c\n", ch5, ch4, ch3, ch2, ch1);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char ch1, ch2, ch3, ch4, ch5;

	printf("다섯 문자 입력 : ");
	scanf("%c %c %c %c %c", &ch1, &ch2, &ch3, &ch4, &ch5);
	printf("%c%c%c%c%c\n", ch5, ch4, ch3, ch2, ch1);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char ch1, ch2;

	printf("두 문자 입력 : ");
	ch1 = getchar();
	ch2 = getchar();
	printf("%c\n%c\n", ch1, ch2);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char ch1, ch2;

	printf("두 문자 입력 : ");
	scanf("%c %c", &ch1, &ch2);
	printf("%c\n%c\n", ch1, ch2);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	float f;
	double d;

	printf("실수 입력 : ");
	scanf("%f", &f);
	printf("실수 출력 = %f\n", f);

	printf("double 입력 : ");
	scanf("%lf", &d);
	printf("double 출력 = %lf\n", d);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	float f1, f2;

	printf("Input 2 real numbers >>");
	scanf("%f %f", &f1, &f2);
	printf("addition = %f\n", f1 + f2); 
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num;
	long int l_num;

	printf("8진수 입력 : ");       // 11
	scanf("%o", &num);
	printf("10진수 출력 = %d\n", num); // 9

	printf("10진수 입력 : ");       // 123
	scanf("%d", &num);
	printf("10진수 출력 = %d\n", num); // 123

	printf("16진수 입력 : ");       // 11
	scanf("%x", &num);
	printf("10진수 출력 = %d\n", num); // 17

	printf("long 입력 : ");       // 1234
	scanf("%ld", &l_num);
	printf("long 출력 = %ld\n", l_num); // 1234
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, ch1;

	printf("number : ");
	scanf("%d", &a);
	printf("a = %d\n", a);

	getchar();
	printf("char1 : ");
	scanf("%c", &ch1);
	printf("ch1 = %c\n", ch1);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, ch1;

	printf("number : ");
	scanf("%d", &a);
	printf("a = %d\n", a);

	printf("char1 : ");
	scanf("%c", &ch1);
	printf("ch1 = %c\n", ch1);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a;

	//scanf("%d", a);
	scanf("%d", &a);

	printf("%d\n", a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num;

	printf("Enter the number : ");
	scanf("%d", &num);
	printf("number : %d\n", num);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char ch;

	printf("Enter the character : ");
	scanf("%c", &ch);
	printf("input character : %c\n", ch);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char str[10];

	printf("Enter the string : ");
	gets(str);
	printf("input string : %s\n", str);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter the character : ");
	ch = getchar();
	printf("input character : %c\n", ch);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	printf("<\"That's great! You scored 99%%\">\n");


	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int x = 100;
	int y = 100;
	int z = 100;

	printf("몫=%d, 나머지=%d\n", x/25, x%25);
	printf("몫=%d, 나머지=%d\n", y/35, y%35);
	printf("몫=%d, 나머지=%d\n", z/45, z%45);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char ch1 = 'A', ch2 = 66, ch3 = 'A' + 2;

	printf("%c%c%c\n", ch1, ch2, ch3);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	printf("This is the first line");
	printf("\n\n\n");
	printf("This is the second line\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	printf("%o, %d, %x\n", 1256, 1256, 1256);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	puts("홍길동");
	printf("%s\n", "홍길동");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char b = 'A';
	float c = 3.14159;

	printf("[%c]\n", b);
	printf("[%8c]\n", b);
	printf("[%-8c]\n", b);
	printf("[%f]\n", c);
	printf("[%8.3f]\n", c);
	printf("[%-8.3f]\n", c);
	printf("[%08.3f]\n", c);
	printf("[%+8.3f]\n", c);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1234;

	printf("[%d]\n", a);
	printf("[%8d]\n", a);
	printf("[%-8d]\n", a);
	printf("[%+8d]\n", a);
	printf("[%08d]\n", a);
	printf("[%+08d]\n", a);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char ch1, ch2, ch3, ch4;
	ch1 = 'Y', ch2 = 'e';
	ch3 = 's', ch4 = ',';

	printf("%c%c%c%c ", ch1, ch2, ch3, ch4);
	printf("%s\n", "I am a computer");
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	float x = 123.456, y = 789.012;
	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("x + y = %f\n", x + y);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x, y, z;
	x = 123, y = 456;
	z = x + y;
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = x + y = %d\n", z);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	printf("%c, %d, %f\n", 'w', 10, 10.23);
	printf("%o, %x, %e\n", 10, 10, 10.23);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	puts("Hello World!\n");
	puts("Happy Birthday!\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	puts("ABC");
	puts("DEF");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	//char ch = 'A';
	char ch = 66;
	putchar(ch);
	
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	putchar('T');
	putchar('\n');
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	double f = 0.1;
	double sum = 0.0;

	int i;

	for (i = 0; i < 100000; i++)
		sum += f;

	printf("sum=%lf\n", sum);  // sum=9998.556641
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	float f = 0.1f;
	float sum = 0.0f;

	int i;

	for (i = 0; i < 100000; i++)
		sum += f;

	printf("sum=%f\n", sum);  // sum=9998.556641
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char ch = 'a';
	//char ch = 'A';
	//char ch = '0';
	//char ch = '\n';
	//char ch = '\t';
	//char ch = ' ';
	//char ch = '\0';
	printf("ch=%c\n", ch);  // 65

	return 0;
}
#endif



#if 0
#include <stdio.h>

typedef struct
{
	char b : 1;
} BIT;
int main()
{
	BIT a;
	a.b = 1;  // 1
			  // 1

	printf("a.b=%d\n", a.b);  // -1

	return 0;
}
#endif

#if 0
#include <stdio.h>

typedef struct
{
	char b : 2;
} BIT;
int main()
{
	BIT a;
	a.b = 3;  // 11
	          // 01
				
	printf("a.b=%d\n", a.b);  // -1

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	short int i=0xfffe;   // 1111 1111 1111 1110
	                      // 0000 0000 0000 0010
	//printf("sizeof(i)=%lu\n", sizeof(i));  
	printf("i=%d\n", i);  // -2

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	//int i = 200;
	//int i = -1;
	//int i = 0xffffffff;
	int i = 0xfffffffc;

	printf("i=%d\n", i);  // -1

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	//char ch=-5;
	//char ch = 255;
	//char ch = 200;
	char ch = 128;

	printf("ch=%d\n", ch);  // -128

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char ch;
	int i;
	float f;
	double d;
	printf("sizeof(ch)=%lu\n", sizeof(ch));  // 1
	printf("sizeof(i)=%lu\n", sizeof(i));  // 4
	printf("sizeof(f)=%lu\n", sizeof(f));  // 4
	printf("sizeof(d)=%lu\n", sizeof(d));  // 8
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	printf("hello world\n");
	return 0;
}
#endif