#if 1
#include <stdio.h>
int main() {
	int n = 15;
	int count = 0;
	int a[100][100] = { 0, };
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
			a[j][i] = ++count;
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
int main(){
	int n = 15;
	int count = 0;
	int a[100][100] = { 0, };
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + 1; j++)
			a[i][n - i - 1 + j] = ++count;
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
	int a[200];
	int i,j;

	for (i = 0; i < 200; i++)
		a[i] = i + 1;

	a[0] = -1;
	for (i = 0; i < 200; i++)
	{
		if (a[i] < 0)
			continue;
		for (j = i + 1; j < 200; j++)
		{
			if (a[j] < 0)
				continue;
			if (a[j] % a[i] == 0)
				a[j] = -1;
		}
	}

	for (i = 0; i < 200; i++)
	{
		if (a[i] < 0)
			printf("%4s", "X");
		else
			printf("%4d", a[i]);

		if ((i + 1) % 10 == 0)
			printf("\n");
	}


	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, j;
	int count = 0;
	for (i = 1; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%4d", i);
			count++;
			if (count % 10 == 0)
				printf("\n");
		}
	}
	printf("\n");
	printf("Total : %d개\n", count);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a[3][4] = { 0, };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
			a[i][3] += a[i][j];
		}
	}

	printf("%8s%8s%8s%8s\n", "국어", "영어", "수학", "총점");
	printf("=================================================\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%8d", a[i][j]);
		printf("\n");
	}
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a[10];
	int max, min;
	int total = 0;
	int i;

	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);

	max = a[0];
	min = a[0];
	for (i = 0; i < 10; i++)
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
		total += a[i];
	}

	for (i = 0; i < 10; i++)
		printf("%4d", a[i]);
	printf("\n");
	printf("최대값 : %d, 최소값 : %d, 합계 : %d\n", max, min, total);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}

	return 0;
}
#endif


#if 0

#include <stdio.h>

int main()
{
	int jumin[] = { 8,8,1,1,2,5,2,4,6,6,9,1,1 };
	int check[] = { 2,3,4,5,6,7,8,9,2,3,4,5 };
	int i;
	int sum = 0;

	for (i = 0; i < 12; i++)
		sum += jumin[i] * check[i];

	sum = (11 - sum % 11) % 10;

	if (sum == jumin[12])
		printf("올바른 주민 번호 입니다.\n");
	else
		printf("잘못된 주민 번호 입니다.\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>
#define MON   12

int main()
{
	char str1[7] = {'K', 'O', 'R', 'E', 'A', '\0' };
	char str2[6] = "KOREA";
	char str3[] = "KOREA";
	char alpha[] = { 'a','b','c','\0','1','2','3','\0' };


	printf("%s\n", alpha);
	printf("%c\n", alpha[4]);
	printf("%s\n", &alpha[4]);
	printf("%d\n", alpha);
	printf("%s %s %s\n", str1, str2, str3);
	return 0;
}
#endif

#if 0
#include <stdio.h>
#define MON   12

int main()
{
	int days[MON] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;

	for (i = 0; i < MON; i++)
		printf("%d월은 %d일 입니다.\n", i + 1, days[i]);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int num[10];

	for (i = 0; i < 10; i++)
	{
		printf("Input %d : ", i);
		scanf("%d", &num[i]);
	}
	printf("\nOUTPUT\n");

//	for (i = 9; i >= 0; i--)
//		printf("%4d", num[i]);

	for (i = 0; i < 10; i++)
		printf("%4d", num[10-i-1]);
	printf("\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int num[10];
	
	for (i = 0; i < 10; i++)
	{
		printf("Input %d : ", i);
		scanf("%d", &num[i]);
	}
	printf("\nOUTPUT\n");

	for (i = 0; i < 10; i++)
		printf("%4d", num[i]);
	printf("\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int number[4];
	char alpha[8];

	number[0] = 5;
	number[1] = 10;
	number[2] = 15;
	number[3] = 20;

	alpha[0] = 'a';
	alpha[1] = 'b';
	alpha[2] = 'c';
	alpha[3] = 'd';
	alpha[4] = '\0';
	printf("%c%c%c%c\n", alpha[0], alpha[1], alpha[2], alpha[3]);
	printf("%s\n", alpha);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3] = { 1,2,3 };
	int b[] = { 10,20,30 };
	int sum[] = {0,0,0};
	int i;

	for(i=0; i<3; i++)
		sum[i] = a[i] + b[i];

	printf("%d, %d, %d\n", sum[0], sum[1], sum[2]);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a[3] = { 1,2,3 };
	int b[] = {10,20,30};
	int sum1, sum2, sum3;

	sum1 = 0; 
	sum2 = 0;
	sum3 = 0;

	sum1 = a[0] + b[0];
	sum2 = a[1] + b[1];
	sum3 = a[2] + b[2];
	printf("%d, %d, %d\n", sum1, sum2, sum3);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int a[5];

	for (i = 0; i < 5; i++)
	{
		a[i] = i + 1;
		printf("%d\t", a[i]);
	}
	printf("\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int a[5] = { 1,2,3,4,5 };

	for (i = 0; i < 5; i++)
		printf("%d\t", a[i]);
	printf("\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int n;
	int i, j;

	printf("라인수 입력 : ");
	scanf("%d", &n);

	for (i = 0; i < n/2+1; i++)
	{
		for (j = 0; j < n / 2 - i; j++)
			printf(" ");
		for (j = 0; j < i*2+1; j++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i < n / 2 ; i++)
	{
		for (j = 0; j < i+1; j++)
			printf(" ");
		for (j = 0; j < n - (i+1) * 2; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i,j;

	for (i = 0; i < 9; i++)
	{
		printf("%d단 출력\n", i + 1);
		printf("========\n");

		for (j = 0; j < 9; j++)
		{
			printf("%d * %d = %2d\n", i + 1, j + 1, (i + 1) * (j + 1));
		}
		printf("\n\n");
	}
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int char_cnt = 0;
	int word_cnt = 0;
	int line_cnt = 0;
	int flag = 0;
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF ) // ctrl+z
			break;

		if (ch != '\n' && ch != ' ' && ch != '\t')
		{
			if (flag == 0)
			{
				word_cnt++;
				flag = 1;
			}
		}
		else
		{
			flag = 0;
		}

		char_cnt++;

		if (ch == '\n')
			line_cnt++;
	}
	printf("문자수: %d, 단어수: %d, 라인수: %d\n",
		char_cnt, word_cnt, line_cnt);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == '\n')
			break;

		if (ch == ' ')
			ch = '.';

		putchar(ch);
	}

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int a, b, c;
	int num1, num2;
	scanf("%d %d", &a, &b);
	num1 = a; 
	num2 = b;
	c = a % b;

	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;
	}

	printf("최대 공약수는 : %d\n", b);
	printf("최소 공배수는 : %d\n", num1*num2/b);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int i;
	int count = 0;
	int total = 0;

	for (i = 10; i <= 100; i++)
	{
		if (i % 4 == 0)
		{
			count++;
			total += i;
		}
	}

	printf("합     = %d\n", total);
	printf("개수   = %d\n", count);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int i;
	int n;
	int num;
	int total = 0;
	double aver;
	int max = -99999;
	int min = 99999;

	printf("숫자 입력 : \n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &num);
		total += num;

		if (num > max)
			max = num;

		if (num < min)
			min = num;
	}
	aver = (double)total / n;

	printf("합     = %d\n", total);
	printf("평균   = %lf\n", aver);
	printf("최대값 = %d\n", max);
	printf("최소값 = %d\n", min);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int num;
	int total = 1;

	printf("숫자 입력 : \n");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		total *= i + 1;

	printf("%d! = %d\n", i, total);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int score;
	int total = 0;

	i = 0;
	while (i < 5)
	{
		printf("점수 입력 : \n");
		scanf("%d", &score);
		total += score;
		if (score >= 90)
			printf("A 학점\n");
		else if( score >= 80 )
			printf("B 학점\n");
		else if (score >= 70)
			printf("C 학점\n");
		else
			printf("F 학점\n");
		i++;
	}
	printf("총점 : %d\n", total);
	printf("평균 : %lf\n", (double)total/i);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	i = 2;
	while ( i <= 100 )
	{
		printf("i = %d\n", i);
		sum += i;
		i += 2;
	}

	printf("sum = %d\n", sum);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 2; i <= 100; i += 2)
	{
		printf("i = %d\n", i);
		sum += i;
	}

	printf("sum = %d\n", sum);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;
		
	for (i = 1;  i <= 100; i++)
	{
		sum += i;
		printf("i = %d\n", i);
	}
	printf("sum = %d\n", sum);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	i = 1;
	while ( i <= 100 )
	{
		sum += i;
		printf("i = %d\n", i);
		i++;
	}
	printf("sum = %d\n", sum);

	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	int x, y;

	for( x=y=0; y<10; y++ )
	{
		if (y%2 == 0)
			continue;
		x += y;
	}

	printf("%d, %d\n", x, y);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int ch;

	while ( (ch = getchar()) != EOF)   // EOF => ctrl + z
	{
		if (ch == 'h')
			continue;
		putchar(ch);
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int sum = 0, k = 0;

	while (1)
	{
		k++;
		if( k > 5 )
			break;
		sum += k;
	}

	printf("%d, %d\n", k, sum);
	return 0;
}
#endif



#if 0
#include <stdio.h>

int main()
{
	char ch;

	while (1)
	{
		if ((ch = getchar()) == '/')
			break;
		putchar(ch);
	}
	
	printf("end\n");
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age, level = 0;
	printf("나이 입력 : ");
	scanf("%d", &age);

	for ( ; age >= 10; age -= 10)
		level++;


	printf("%d 대\n", level * 10);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int i, j, data;

	for (i = 0, data = 0; i < 10; i++)
	{
		for (j = 0; j < 1000; j++)
			data += 1;
	}


	printf("%d\n", data);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int i, j, data;
	
	for (i = 1, data = 0; i <= 6; i++)
	{
		for (j = 1; j <= 1; j++)
			data += j;
	}


	printf("%d\n", data);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;
	int sum = 0;

	for (a = 0; a < 100; a++)
		sum += a + 1;
	
	
	printf("%d\n", sum);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;

	for (a = 0; a < 10; a++)
		printf("hello\n");

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a=1;

	while (a <= 10)
	{
		printf("hello\n");
		a++;
	}

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a;

	for (a = 1; a <= 10; a++)
		printf("hello\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int x=9;

	while (x >= 1)
	{
		if (x > 1)
			printf("%d, ", x); // 9, 7, 5, 3, 1
		else
			printf("%d\n", x);
		x -= 2;
	}
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int x;
	
	for (x = 9; x >= 1; x -= 2) 
	{
		if (x > 1)
			printf("%d, ", x); // 9, 7, 5, 3, 1
		else
			printf("%d\n", x);
	} 
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age, level = 0;
	printf("나이 입력 : ");
	scanf("%d", &age);

	do{
		age -= 10;
		level++;
	} while (age >= 10);

	printf("%d 대\n", level * 10);
	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int data = 7, num = 6;

	do {
		data += 2;
		++num;
	} while (num > 10);

	printf("%d, %d\n", data, num);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1;


	do {
		printf("hello\n");
		a++;
	} while (a > 5);

	return 0;
}
#endif

#if 0
#include <stdio.h>

int main()
{
	int a = 1;

	
	do{
		printf("hello\n");
		a++;
	} while (a <= 10);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int age, level = 0;
	printf("나이 입력 : ");
	scanf("%d", &age);

	while (age >= 10)
	{
		age -= 10;
		level++;
	}

	printf("%d 대\n", level*10);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int data = 1, num = 1;
	while (num < 6)
		data += num++;
	

	printf("%d, %d\n", data, num);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main()
{
	int a = 1;
	while (a > 5)
	{
		printf("%d\n", a);
		a++;
	}
	return 0;
}
#endif
#if 0

#include <stdio.h>

int main()
{
	int a = 1;
	while (a <= 10)
	{
		printf("hello\n");
		a++;
	}
	return 0;
}
#endif