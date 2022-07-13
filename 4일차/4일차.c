

#if 1
#include <stdio.h>
int main()
{
	int i;
	char* week[] = { "일","월","화","수","목","금","토" };
	int n = sizeof(week) / sizeof(week[0]);
	for (i = 0; i < n; i++)
		printf("%s요일\n", week[i]);

	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	char a[] = "hello";
	printf("%s\n", a);

	a[0] = 'a';
	
	printf("%s\n", a);

	a = "world";


	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	char* p = "hello";
	printf("%s\n", p);

	// p[0] = 'a';
	p = "world";
	printf("%s\n", p);


	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	printf("%d\n", sizeof("hello"));

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[2][2] = { 1,2,3,4 };
	int (*p)[2] = a;

	p[1][1] = 10;

	printf("%d\n", a[1][1]);

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[2][2] = { 1,2,3,4 };
	int **p = a;

	p[1][1] = 10;

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[2][2] = { 1,2,3,4 };
	int* p = a;

	p[1][1] = 10;

	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };

	int(*p)[5] = &a;

	printf("p   = %p\n", p);
	printf("p+1 = %p\n", p + 1);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };

	int (*p)[5] = &a;

	printf("p   = %p\n", p);
	printf("p+1 = %p\n", p+1);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };

	printf(" a = %p\n", a);
	printf("&a = %p\n", &a);

	printf(" a+1 = %p\n", a + 1);
	printf("&a+1 = %p\n", &a + 1);

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;
	int i;

	for (i = 0; i < 5; i++)
		printf("%d\n", p[i]);
	
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* p = a;

	printf("sizeof(p)     = %d\n", sizeof(p));
	printf("sizeof(int*)  = %d\n", sizeof(int*));

	printf("sizeof(a)     = %d\n", sizeof(a));
	printf("sizeof(int[5])= %d\n", sizeof(int [5]));

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	char city[] = "Korea Seoul";
	int i = 0;

	while (*(city + i) != '\0')
		i++;

	printf("%d\n", i);

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int i;
	char str[20];
	char* ptr;

	for (i = 0; i < 20; i++)
		str[i] = 65 + i;

	ptr = str + 19;
	for (i = 0; i < 20; i++)
		printf("%c, %c\n", str[i], *(ptr - i));

	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int data[2] = { 100,300 };
	int* p1, * p2, * p3;

	p1 = p2 = p3 = data;
	
	printf("*p1++ = %d\n", *p1++); // 100 , p1 += 1
	printf("*++p2 = %d\n", *++p2); // p2 += 1 , 300
	printf("(*p3)++ = %d\n", (*p3)++); // 100 => 101

	printf("%d, %d, %d\n", *p1, *p2, *p3); // 300, 300, 101

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int num;
	int a[5] = { 1,2,3,4,5 };
	
	num = *a + 3;
	printf("%d, ", num); // 4

	num = *(a + 3) + 5;
	printf("%d, ", num); // 9

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int menu[5] = {0, 10, 20, 30, 40};
	int i;
	int* ptr;

	ptr = &menu[1];

	i = *ptr++;
	// 1. i = *ptr
	// 2. ptr = ptr + 1
	
	printf("i = %d, *ptr = %d\n", i, *ptr);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;
	int *ptr;

	ptr = days;
//	for (i = 0; i < 12; i++)
//		printf("%2d월은 %d일 입니다.\n", i+1, days[i]);

//	for (i = 0; i < 12; i++)
//		printf("%2d월은 %d일 입니다.\n", i + 1, *(ptr+1));

	for (i = 0; i < 12; i++, ptr++)
		printf("%2d월은 %d일 입니다.\n", i + 1, *ptr);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* pa = &a[4];
	int i;

	for (i = 0; i < 5; i++)
		printf("%4d", *pa--);

	printf("\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* pa = &a[0];
	int i;

//	for(i=0; i<5; i++)
//		printf("%4d", *(pa+i));

	for(i=0; i<5; i++)
		printf("%4d", *pa++);

	printf("\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int* pa = &a[0];

	printf("*(pa+1) = %d\n", *(int*)((char*)pa + 1)); 

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	double a[5];
	double* pa = &a[0];
	int i;

	printf("pa   = %p\n", pa);     // 0x004FFD90
	printf("pa+1 = %p\n", pa + 1); // 0x004FFD98

	// pointer + n => pointer + n*sizeof(*pointer)

	return 0;
}
#endif

#if 0
#include <stdio.h>
int main()
{
	char a[5] = { 1,2,3,4,5 };
	char* pa = &a[0];
	int i;

	printf("pa   = %p\n", pa);     // 0x0117FE18
	printf("pa+1 = %p\n", pa + 1); // 0x0117FE19

	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* pa = &a[0];
	int i;

	printf("pa   = %p\n", pa);   // 0x00CFF6E4
	printf("pa+1 = %p\n", pa+1); // 0x00CFF6E8

	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int* pa;
	int i;

	pa = &a[0];
	// *pa = 10;
	pa[0] = 20;

	for (i = 0; i < 5; i++)
		printf("%4d", a[i]);
	printf("\n");


	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int num1 = 0, num2 = 0;
	int* ptr = &num1;

	printf("%d, %d, %d\n", num1, num2, *ptr);

	num2 = *ptr;
	printf("%d, %d, %d\n", num1, num2, *ptr);

	ptr = 0;  //  null pointer 

	printf("%d, %d, %d\n", num1, num2, *ptr);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int num1 = 0, num2 = 0;
	int* ptr = &num1;

	*ptr = 10;

	printf("%d, %d, %d\n", num1, num2, *ptr);

	num2 = *ptr;
	printf("%d, %d, %d\n", num1, num2, *ptr);

	ptr = &num2;
	*ptr = 5;
	printf("%d, %d, %d\n", num1, num2, *ptr);
	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int data;
	int* ptr;
	data = 3;
	ptr = &data;
	*ptr = 4;
		
	printf("data  = %d\n", data);
	printf("&data = %p\n", &data);
	printf("ptr   = %p\n", ptr);
	printf("&ptr  = %p\n", &ptr);
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int n;
	int i, j;
	int count = 0;
	int a[100][100] = { 0, };
	int row = 0, col = 0;
	int r, c;
	
	printf("크기 입력 : ");
	scanf("%d", &n);

	col = n / 2;
	a[row][col] = ++count;

	for (i = 0; i < n * n-1; i++)
	{
		r = row - 1;
		c = col - 1;

		if (r < 0)
			r = n - 1;

		if (c < 0)
			c = n - 1;

		if (a[r][c] != 0)
		{
			r = row + 1;
			c = col;
		}
		a[r][c] = ++count;
		row = r;
		col = c;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			a[i][n] += a[i][j];
			a[n][i] += a[j][i];
			if (i == j)
				a[n][n] += a[i][j];
		}
	}

	for (i = 0; i < n+1; i++)
	{
		for (j = 0; j < n+1; j++)
		{
			if (a[i][j] == 0)
				printf("%4s", " ");
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif



#if 0
#include <stdio.h>
int main()
{
	int n;
	int i, j;
	int count = 0;
	int a[100][100] = { 0, };
	int row = 0, col = -1;
	int max;
	int inc = 1;

	printf("크기 입력 : ");
	scanf("%d", &n);

	max = n;

	while (1)
	{
		for (i = 0; i < max; i++)
			a[row][col+=inc] = ++count;

		if (--max == 0)
			break;

		for (i = 0; i < max; i++)
			a[row+=inc][col] = ++count;

		inc = -inc;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4s", " ");
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int n;
	int i, j, k;
	int count = 0;
	int a[100][100] = { 0, };

	printf("크기 입력 : ");
	scanf("%d", &n);

	for (i = 0; i < n * 2 + 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (j + k == i)
					a[k][j] = ++count;
			}
		}
	}



	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4s", " ");
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int n;
	int i, j;
	int count = 0;
	int a[100][100] = { 0, };

	printf("크기 입력 : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
			a[i - j][j] = ++count;
	}


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4s", " ");
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int n;
	int i, j;
	int count = 0;
	int a[100][100] = { 0, };
	int inc = -1;
	int sign = 1;

	printf("크기 입력 : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		if (i == n/2+1)
			sign = -sign;

		inc += sign;

		for (j = 0; j < n - 2 * inc; j++)
			a[inc + j][i] = ++count;
	}




	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4s", " ");
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int n;
	int i, j;
	int count = 0;
	int a[100][100] = { 0, };
	int inc = -1;

	printf("크기 입력 : ");
	scanf("%d", &n);


	for (i = 0; i < n; i++)
	{
		if (i <= n / 2)
		{
			++inc;
			for (j = 0; j < n - 2 * inc; j++)
				a[inc + j][i] = ++count;
		}
		else
		{
			--inc;
			for (j = 0; j < n - 2 * inc; j++)
				a[inc + j][i] = ++count;
		}
	}



	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4s", " ");
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>
int main()
{
	int n;
	int i, j;
	int count = 0;
	int a[100][100] = { 0, };

	printf("크기 입력 : ");
	scanf("%d", &n);

	for (i = 0; i < n / 2 + 1; i++)
	{
		for (j = 0; j < n - 2 * i; j++)
		{
			a[i + j][i] = ++count;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (a[i][j] == 0)
				printf("%4s", " ");
			else
				printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
#endif