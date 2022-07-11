#if 1
#include <stdio.h>

int main()
{
	float a;

	scanf("%f", &a);

	switch (a)
	{
	case 1:	printf("1111\n"); break;
	case 2:	printf("2222\n"); break;
	default: printf("해당 사항 없습니다.\n");
	}
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int age;
	
	printf("나이 입력 : ");

	scanf("%d", &age);

	switch (age / 10)
	{
	case 6:	printf("60대 \n"); break;
	case 5:	printf("50대 \n"); break;
	case 4:	printf("40대 \n"); break;
	case 3:	printf("30대 \n"); break;
	case 2:	printf("20대 \n"); break;
	case 1:	printf("10대 \n"); break;
	default: printf("해당 사항 없습니다.\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num, data = 1;
	data += 1;

	switch (data)
	{
	case 1:	num = 60;
	case 2:	num = 70;
	case 3:	num = 80;
	case 4:	num = 90;
	default: num = 100;
	}
	printf("%d\n", num);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x, y;
	char ch;

	scanf("%d %d", &x, &y);

	switch (x+y)
	{
	case 100:	ch = 'A'; break;
	case 200:	ch = 'B'; break;
	case 300:	ch = 'C'; break;
	}
	printf("%c\n", ch);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int month;
	int day = 0;

	printf("월 입력 : ");
	scanf("%d", &month);

	switch (month)
	{
	case 12:  day += 30;
	case 11:  day += 31;
	case 10:  day += 30;
	case  9:  day += 31;
	case  8:  day += 31;
	case  7:  day += 30;
	case  6:  day += 31;
	case  5:  day += 30;
	case  4:  day += 31;
	case  3:  day += 28;
	case  2:  day += 31;
	}

	printf("%d월 까지 지나온 날수는 %d일 입니다.\n", month, day);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	switch (a)
	{
	case 1:	printf("one\n"); 
	case 2:	printf("two\n"); 
	case 3:	printf("three\n"); 

	default:
		printf("error\n");
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	switch (a)
	{
	case 1:	printf("one\n"); break;
	case 2:	printf("two\n"); break;
	case 3:	printf("three\n"); break;

	default:
		printf("error\n");
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if (a == 1)
		printf("one\n");
	else if (a == 2)
		printf("two\n");
	else if (a == 3)
		printf("three\n");
	else
		printf("error\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int year;

	printf("생년 입력 : ");

	scanf("%d", &year);

	if ( ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		printf("%d년는 윤년 입니다.\n", year);
	else
		printf("%d년는 평년 입니다.\n", year);


	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char ch;

	printf("입력 : ");

	scanf("%c", &ch);

	if ( ('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z'))
		printf("%c는 문자 입니다.\n", ch);


	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a;

	printf("숫자를 입력해 주세요 : ");

	scanf("%d", &a);

	if (0 < a < 10)
	//if (0 < a && a < 10)
		printf("a는 0보다 크고, 10보다 작습니다.\n");


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age;

	printf("나이를 입력해 주세요 : ");

	scanf("%d", &age);

	if (age >= 60)
		printf("60대 이상\n");
	else if (age >= 50) 
		printf("50대\n");
	else if (age >= 40)
		printf("40대\n");
	else if (age >= 30)
		printf("30대\n");
	else if (age >= 20)
		printf("20대\n");
	else if (age >= 10)
		printf("10대\n");
	else
		printf("유소년 \n");


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age;

	printf("나이를 입력해 주세요 : ");

	scanf("%d", &age);

	if (age >= 60)
		printf("60대 이상\n");
	
	if (age >= 50 && age < 60)
		printf("50대\n");

	if (age >= 40 && age < 50)
		printf("40대\n");

	if (age >= 30 && age < 40)
		printf("30대\n");

	if (age >= 20 && age < 30)
		printf("20대\n");

	if (age >= 10 && age < 20)
		printf("10대\n");

	if (age < 10)
		printf("유소년 \n");


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, x = 5, y = 4, z = 6;

	if (x < y && y < z)
		a = 5;
	else if (x < z && y < z)
		a = 6;
	else
		a = 7;

	printf("a = %d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	if (num == 0)
		printf("zero\n");
	else if (num > 0)
		printf("plus\n");
	else
		printf("minus\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int x, y, z = 7, w = 6;

	if (z > 0)
	{
		if (w > 10)
		{
			x = 20;
			y = x + 10;
		}
		else
		{
			x = 30;
			y = x + 10;
		}
	}
	else
		y = 0;

	printf("%d, %d, %d\n", x, y, z);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 4, y = 5, z = 6;

	if (x < y)
	{
		if (y < z)
			y += 1;
		else
			y -= 1;
	}
	else
		y = 0;

	printf("%d, %d, %d\n", x, y, z);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	if (num >= 0)
	{
		if(num == 0)
			printf("zero\n");
		else
			printf("plus\n");
	}
	else
		printf("minus\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int num, data = 0;

	if ( !data )
		num = 10;
	else
		num = 1;

	printf("num = %d\n", num);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, x = 3, y = 4;

	if (x == y)
		a = 5;
	else
		a = 7;

	printf("a = %d\n", a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, x = 3, y = 4;

//	if (x < y)
//		a = 5;
//	else
//		a = 7;

	a = (x < y) ? 5 : 7;

	printf("a = %d\n", a);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	if (num >= 0)
		printf("plus\n");
	else
		printf("minus\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 10;

	if (100 == a)  // 변수와 상수를 비교할 때는 상수를 먼저 써라.
		printf("a is 100\n");

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int x = 0, y = 10;

	if (x != 0 && x < y)
		x = 10;

	printf("%d, %d\n", x, y);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 4, y = 5, z = 6;

	if (x < y && y < z)
		y += 1;

	printf("%d, %d, %d\n", x, y, z);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 0x0000ff00;
	// 0000 0000 0000 0000 1111 1111 0000 0000
	// 1111 1111 1111 1111 0000 0000 1111 1111
	//   f   f    f     f    0    0    f    f
	printf("%x\n", ~x);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x = 0xabcd;

	printf("%d\n", !x);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 710;

	printf("%d\n", a >> 4);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a=20, b=50;
	
	a /= 2;
	b /= 2;

	printf("%d\n", a+b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, b, c, d;
	int max_num;

	printf("네 변수 입력 : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	max_num = (a > b) ? a : b;
	max_num = (max_num > c) ? max_num : c;
	max_num = (max_num > d) ? max_num : d;

	printf("가장 큰 값은 %d 입니다.\n", max_num);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, b, c;
	int max_num;

	printf("세 변수 입력 : ");
	scanf("%d %d %d", &a, &b, &c);

	max_num = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	printf("가장 큰 값은 %d 입니다.\n", max_num);
	return 0;
}
#endif


#if 0
#include <stdio.h>

#define M_PI       3.14159265358979323846 

int main()
{
	int r;
	double area;
	printf("반지름 입력 : ");
	scanf("%d", &r);
	
	area = r * r * M_PI;
	printf("반지름이 %d인 원의 넓이는 %lf입니다.\n", r, area);	
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 10, b = 0;
	b = (a < 3) ? 5 : 8; // b = 8
	printf("%d, %d\n", a, b);
	a = (b = 10, b++);   // a = 10, b = 11
	printf("%d, %d\n", a, b);
 
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, b;
	a = (7 % 5);         // a = 2
	b = (a = a + 5) + 6; // a = 7, b = 13
	printf("%d, %d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int price;
	int money;
	int won;


	printf("물건값 낸돈 입력 : ");
	scanf("%d %d", &price , &money);

	won = money - price;
	printf("잔돈 : %d원\n", won);
	
	printf("오천원짜리 : %d개\n", won/5000);
	won %= 5000;
	printf("천원짜리 : %d개\n", won/1000);
	won %= 1000;
	printf("오백원짜리 : %d개\n", won/500);
	won %= 500;
	printf("백원짜리 : %d개\n", won/100);
	won %= 100;
	printf("오십원짜리 : %d개\n", won/50);
	won %= 50;
	printf("십원짜리 : %d개\n", won/10);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int second;
	int hour;
	int min;
	
	printf("초 입력 : ");
	scanf("%d", &second);
	
	hour = second / 3600;
	second %= 3600;
	min = second / 60;
	second %= 60;
	printf("%d초는 %d시간 %d분 %d초 입니다.\n", 
		second, hour, min, second);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	float  a, b;
	float  aver;

	printf("두 실수 입력 : ");
	scanf("%f %f", &a, &b);
	aver = (a + b) / 2;
	printf("a=%f, b=%f, aver=%f\n", a, b, aver);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a, b, c, d;

//	a = 1;
//	b = 2; 
//	c = 3;

	d = (a = 1, b = 2, c = 3);

	printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a, b;

	a = (b = 0, b + 2);
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	printf("%c\n", (char)(65+32));
	printf("%d\n", (int)((int)3.14 + (float)3 + 1));

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 5, b = 2;
	double f;
	
	printf("%.2lf\n", f = a / b);
	printf("%.2lf\n", (double)f = a / b);
	printf("%.2lf\n", f = (double)a / b);
	printf("%.2lf\n", f = (double)(a / b));

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 25;
	int b = 100;

	double c = (double)a / b;

	printf("c = %lf%%\n", c);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a;
	int b = 100;

	a = sizeof(++b);
	printf("a = %d, b = %d\n", a, b);

	sizeof(a = b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 3, b = 5;

	printf("char           : %d byte\n", sizeof(char));
	printf("int            : %d byte\n", sizeof(int));
	printf("float          : %d byte\n", sizeof(float));
	printf("double         : %d byte\n", sizeof(double));
	printf("sizeof a       : %d byte\n", sizeof(a));
	printf("sizeof a+b     : %d byte\n", sizeof(a+b));
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int i = 1, j = 2, k = 3;
	printf("%d\n", i == j ? i : j);
	printf("%d\n", k % 3 == 0 ? (i=5) : (i=10)); // i=5
	printf("%d\n", i = k%3 == 0 ? 5 : 10); 
	//printf("%d\n", i = ((k % 3) == 0) ? 5 : 10);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int x = 1, y = 2, z = 3;
	printf("%d\n", x > y ? x : y );
	printf("%d\n", x < y ? x++ : y++); // x=2
	printf("x = %d, y = %d\n", x, y);

	z += x + y ? x++ : y++;  // x=3
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char item = 0;   // 0000 0000

					 // 0000 0000 
					 // 0000 0001 |
					 // 0000 0001
	item |= 1<<0;
	// 0000 0001 
	// 0000 1000 |
	// 0000 1001
	item |= 1<<3;
	// 0000 1001 
	// 0000 0001 &
	// 0000 0001
	printf("%d\n", item & (1<<0));

	// 0000 1001
	// 1111 0111 &
	// 0000 0001
	item &= ~(1<<3);
	printf("%d\n", item & (1<<3));
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a = -7;

	// 1111 1001
	// 1111 1100 -4

	printf("a >> 1 = %d\n", a >> 1);  // a>>1 == a/2

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a = -16;

	// 11110000 => -16
	// 11111000 => -8
	// 11111100 => -4
	// 11111110 => -2
	// 11111111 => -1

	printf("a >> 1 = %d\n", a >> 1);  // a>>1 == a/2
	printf("a >> 2 = %d\n", a >> 2);  // a>>1 == a/4
	printf("a >> 3 = %d\n", a >> 3);  // a>>2 == a/8
	printf("a >> 4 = %d\n", a >> 4);  // a>>3 == a/16

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char a = -1;

	// 11111111 => -1
	// 11111110 => -2
	// 11111100 => -4
	// 11111000 => -8
	// 11110000 => -16


	printf("a << 1 = %d\n", a << 1);  // a<<1 == a*2
	printf("a << 2 = %d\n", a << 2);  // a<<2 == a*4
	printf("a << 3 = %d\n", a << 3);  // a<<3 == a*8
	printf("a << 4 = %d\n", a << 4);  // a<<4 == a*16

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 30;

	// 00011110
	// 00001111  a>>1
	// 00000111  a>>2
	// 00000011  a>>3
	// 00000001  a>>4

	printf("a >> 1 = %d\n", a >> 1);  // a>>1 == a/2
	printf("a >> 2 = %d\n", a >> 2);  // a>>2 == a/4
	printf("a >> 3 = %d\n", a >> 3);  // a>>3 == a/8
	printf("a >> 4 = %d\n", a >> 4);  // a>>4 == a/16


	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 5, b = 3, c = 7, d = 6;

	// 0101
	// 0011 &
	// 0001
	printf("%d\n", a & b);  
	// 0111
	// 0110 ^
	// 0001
	printf("%d\n", c ^ d);
	// 0101
    // 0110 ^
    // 0111
	printf("%d\n", a | d);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 30;

	// 00011110
	// 00111100
	
	printf("a << 1 = %d\n", a << 1);  // a<<1 == a*2
	printf("a << 2 = %d\n", a << 2);  // a<<2 == a*4
	printf("a << 3 = %d\n", a << 3);  // a<<3 == a*8
	printf("a << 4 = %d\n", a << 4);  // a<<4 == a*16
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char a = 3;
	char key = a ^ 4;

	while (1)
	{
		getchar();
		a ^= key;
		printf("%d\n", a);
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char a = 3;

	while (1)
	{
		getchar();
		if (a == 3)
			a = 4;
		else if (a == 4)
			a = 3;
		printf("%d\n", a);
	}

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	float a = 3.f, b = 4.f;

	a ^= b ^= a ^= b;

	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a = 3, b = 4;

	a ^= b ^= a ^= b;
	
	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char a = 3, b = 4;

	a ^= b;
	b ^= a;
	a ^= b;

	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a = 3, b = 4;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a = 3, b = 4;

	a = a * b;
	b = a / b;
	a = a / b;

	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	char a = 3, b = 4;

	a = a+b;
	b = a-b;
	a = a-b;

	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 3, b = 4;
	int t;

	t = a;
	a = b;
	b = t;

	printf("a=%d, b=%d\n", a, b);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char item = 0;   // 0000 0000

	                 // 0000 0000 
	                 // 0000 0001 |
	                 // 0000 0001
	item = item | 1;
   	                 // 0000 0001 
	                 // 0000 1000 |
	                 // 0000 1001
	item = item | 8;
	                 // 0000 1001 
	                 // 0000 0001 &
	                 // 0000 0001
	printf("%d\n", item & 1);
	                 
	                 // 0000 1001
	                 // 1111 0111 &
	                 // 0000 0001
	item = item & ~8;
	printf("%d\n", item & 8);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 0x5555, b = 0x00ff;
	printf("a = %08x, b = %08x\n", a, b);
	// 0000 0000 0000 0000 0101 0101 0101 0101
	// 1111 1111 1111 1111 1010 1010 1010 1010
	//   f    f   f     f    a    a    a    a

	// 0000 0000 0000 0000 0000 0000 1111 1111
	// 1111 1111 1111 1111 1111 1111 0000 0000
	//   f    f   f     f    f    f    0    0
	printf("~a = %08x, ~b = %08x\n", ~a, ~b);

	// 0000 0000 0000 0000 0101 0101 0101 0101
	// 0000 0000 0000 0000 0000 0000 1111 1111 &
	// 0000 0000 0000 0000 0000 0000 0101 0101
	printf("a & b = %08x\n", a & b);

	// 0000 0000 0000 0000 0101 0101 0101 0101
    // 0000 0000 0000 0000 0000 0000 1111 1111 |
    // 0000 0000 0000 0000 0101 0101 1111 1111
	printf("a | b = %08x\n", a | b);

	// 0000 0000 0000 0000 0101 0101 0101 0101
	// 0000 0000 0000 0000 0000 0000 1111 1111 ^
	// 0000 0000 0000 0000 0101 0101 1010 1010
	printf("a ^ b = %08x\n", a ^ b);
	return 0;
}
#endif


#if 0
#include <stdio.h>
// 이항 연산과 단항 연산
int main()
{
	printf("%d\n", -2 + 3 * 4 % 5);
	printf("%d\n", 2 + -3 * 4 % -5);
	printf("%d\n", (2 - 3) * -4 % -5);
	printf("%d\n", -4 % -5);
	printf("%d\n", 12 % -5);
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 이항 연산과 단항 연산
int main()
{
	printf("%d\n", 12 / -5);
	printf("%d\n", 12 % -5);
	return 0;
}
#endif

#if 0
#include <stdio.h>
// 이항 연산과 단항 연산
int main()
{
	printf("%d\n", -12 / -5 );
	printf("%d\n", -12 % -5);
	return 0;
}
#endif



#if 0
#include <stdio.h>
// 변수의 지역성 
int main()
{
	int a = 3, b = 2, c = 1;

	printf("%d\n", -(--a));    // a=2
	printf("%d\n", b - (--c)); // c=0
	printf("%d\n", a++ - b );  // a=3
	printf("%d\n", a++ / ++b * --c);  // b=3, c=-1
	// 1. b = b + 1
	// 2. c = c - 1
	// 3. a / b * c
	printf("%d\n", ++c / b++ * --a); // c=0, a=2
	// 1. c = c + 1
	// 2. a = a - 1
	// 3. c / b * a

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 변수의 지역성 
int main()
{
	int a = 10, b = 2;

	a += b++;
	// 1. a = a+b
	// 2. b = b+1
	printf("a=%d, b=%d\n", a, b); // a=12, b=3
	{
		int a = 2;
		a += b;  // a = 5
		b -= a;  // b = 3 - 5
		printf("a=%d, b=%d\n", a, b); // a=5, b=-2
		{
			int b = 5;
			b *= a + 1;  // b=30
			printf("a=%d, b=%d\n", a, b); // a=5, b=30
		}
		printf("a=%d, b=%d\n", a, b);
	}
	printf("a=%d, b=%d\n", a, b);

	return 0;
}
#endif


#if 0
#include <stdio.h>
// 변수의 지역성 
int main()
{
	int a = 5;

	printf("%d\n", a);
	{
		int a = 3;

		printf("%d\n", a);
	}
	printf("%d\n", a);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 5;

	printf("%d\n", a + ++a);
	// 1. a = a+1
	// 2. a+a
	printf("a=%d\n", a);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 5;

	printf("%d\n", ++a + ++a); 
	// 1. a = a+1
	// 2. a = a+1
	// 3. a+a
	printf("a=%d\n", a);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 30, b = 30;
	printf("%d, %d\n", a, b);
	printf("%d\n", ++a);  // a=31
	printf("%d, %d\n", a, b);
	printf("%d\n", a++);  // a=32
	printf("%d, %d\n", a, b);
	printf("%d\n", ++a + ++b); // a=33, b=31
	// 1. a = a+1;
	// 2. b = b+1;
	// 3. a+b
	printf("%d, %d\n", a, b);
	printf("%d\n", b++ + b++); // b=33
	// 1. b + b
	// 2. b = b+1
	// 3. b = b+1
	printf("%d, %d\n", a, b);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a, b = 10;
	//++b; // b = b + 1 => b += 1 => ++b
	//b++;   // b = b + 1 => b += 1 => ++b
	//printf("%d\n", b);

	//printf("%d\n", a = ++b);
	// 1. b = b+1
	// 2. a = b

	printf("%d\n", a = b++);
	// 1. a = b
	// 2. b = b+1
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int i, j, k;
	//i = 3;
	//j = 3;
	//k = 3;
	i = j = k = 3;

	printf("i=%d, j=%d, k=%d\n", i, j, k);

	printf("%d\n", k %= i = 1 + k / 2);     // i=2, k=1
	printf("%d\n", i += j += k);            // j=4, i=6
	printf("%d\n", k = (i / 2) + (j / 2));  // k=5
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3, d = 4;

	a /= 3 + 1;   //  a = a / (3+1) => a /= 3+1
	b += a;       //  b = b + a;
	c %= a + 1;   //  c = c % (a+1)
	d -= a * 2;   //  d = d - (a*2)
	printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int x = 1, y = 2, z = 4;
	printf("%d\n", x || y && z);
	printf("%d\n", x > y || z == y && x < z);
	printf("%d\n", x != y && y+1 == !z + 4);
	printf("%d\n", y - 1 == 3 || y + 1 == 3 );

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	char b = 'q';
	int i = 3, j = 4, k = 5;
	printf("!i : %d, !b : %d\n", !i, !b);
	printf("k>=3 && k<=7 : %d\n", k >= 3 && k <= 7);
	printf("i==2 && j==4 : %d\n", i == 2 && j == 4);
	printf("b == 'q' || b =='Q' : %d\n ", b == 'q' || b == 'Q');
	return 0;
}
#endif