#if 1
#include <stdio.h>
#include <stdlib.h>
int main(){
	int *score;
	int total = 0, i, n;
	double aver;

	printf("학생수 입력 : ");
	scanf("%d", &n);

	score = (int*)malloc(sizeof(int) * n);

	printf("점수 입력 : ");
	for (i = 0; i < n; i++)
		scanf("%d", &score[i]);

	for (i = 0; i < n; i++)
		total += score[i];
	aver = (double)total / n;

	for (i = 0; i < n; i++)
		printf("%4d ", score[i]);
	printf("%4d %.2lf\n", total, aver);

	free(score);

	return 0;
}

#endif



#if 0
#include <stdio.h>

int main()
{
	int score[3];
	int total = 0;
	double aver;
	int i;

	for (i = 0; i < 3; i++)
		scanf("%d", &score[i]);

	for (i = 0; i < 3; i++)
		total += score[i];

	aver = (double)total / 3;

	for (i = 0; i < 3; i++)
		printf("%4d ", score[i]);
	printf("%4d %.2lf\n", total, aver);

	return 0;
}

#endif


#if 0
#include <stdio.h>

void foo(void)
{
	printf("foo\n");
}

int main()
{
	foo();
	printf("%p\n", foo);
	return 0;
}

#endif


#if 0
#include <stdio.h>

int a;

void func(int *a);

int main()
{
	a = 5;
	func(&a);
	printf("a = %d\n", a);
	return 0;
}

void func(int *a)
{
	*a += 2;
}
#endif



#if 0
#include <stdio.h>

int a;

void func(int a);

int main() 
{
	a = 5;
	func(a);
	printf("a = %d\n", a);
	return 0;
}

void func(int a)
{
	a += 2;
}
#endif



#if 0
#include <stdio.h>

int main() {
	int i;
	i = 5;
	{
		int i;
		i = 3;
		printf("i = % d\n", i);
	}
	printf("i = % d\n", i);
	return 0;
}
#endif


#if 0
#include <stdio.h>

int main() {
	int a = 10, b = 20;
	
	printf("바꾸기 전 a:%d, b:%d\n", a, b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
		printf("%d\n", temp);
	}
	printf("바꾼 후 a:%d, b:%d\n", a, b);
	
	return 0;
}
#endif


#if 0
#include <stdio.h>

void input(int* n);
void hanoi(int n, char from, char by, char to);
int main() {
	int n;

	input(&n);
	hanoi(n, 'a', 'b', 'c');
	return 0;
}
void input(int* n){
	printf("원판의 개수 입력 : ");
	scanf("%d", n);
}
void hanoi(int n, char from, char by, char to){
	if (n == 0)	
		return;

	hanoi(n - 1, from, to, by);
	printf("%d : %c -> %c\n", n, from, to);
	hanoi(n - 1, by, from, to);
}
#endif



#if 0
#include <stdio.h>

void input(int* n);
int fibo_r(int n);
void output( int count );

int main() {
	int n;
	int count;

	input(&n);
	count = fibo_r(n);
	output(count);
	return 0;
}

void input(int* n)
{
	printf("개월수 입력 : ");
	scanf("%d", n);
}

int fibo_r(int n)
{
	if (n < 3)
		return 1;

	return fibo_r(n - 1) + fibo_r(n - 2);
}


void output(int count)
{
	printf("%4d\n", count);
}

#endif



#if 0
#include <stdio.h>

void input(int* n);
void fibo(int* a, int n);
void output(int* a, int n);

int main() {
	int a[1024] = { 0, };
	int n;

	input(&n);
	fibo(a, n);
	output(a, n);
	return 0;
}

void input(int* n)
{
	printf("개월수 입력 : ");
	scanf("%d", n);
}

void fibo(int* a, int n)
{
	int i;
	a[0] = a[1] = 1;

	for (i = 2; i < n; i++)
		a[i] = a[i - 1] + a[i - 2];
}

void output(int* a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");
}

#endif


#if 0
#include <stdio.h>

void input(char* buff);
void my_reverse(char* buff);
void output(char* buff);

int main() {
	char buff[1024];

	input(buff);
	output(buff);
	my_reverse(buff);
	output(buff);
	return 0;
}
void input(char* buff) {
	printf("본문 문자열 입력 : ");
	gets(buff);
}
void my_reverse(char* buff) {
	int len, i, j;
	char t;
	for (i = 0; buff[i] != 0; i++)
		;
	len = i;

	for (i = len - 1, j = 0; j < i; i--, j++)
	{
		t = buff[i];
		buff[i] = buff[j];
		buff[j] = t;
	}

}
void output(char* buff) {
	printf("%s\n", buff);
}

#endif



#if 0
#include <stdio.h>

void input(char* buff, char* ch);
int strindex(char* buff, char ch);
void output(char* buff, char ch, int idx);

int main() {
	char buff[1024];
	char ch;
	int idx;

	input(buff, &ch);
	idx = strindex(buff, ch);
	output(buff, ch, idx);

	return 0;
}
void input(char* buff, char *ch) {
	printf("본문 문자열 입력 : ");
	gets(buff);
	printf("찾을 문자 입력 : ");
	*ch = getchar();
}
int strindex(char* buff, char ch){
	int len,i;

	for (i = 0; buff[i] != 0; i++)
		;
	len = i;
	for (i = len - 1; i >= 0; i--)
		if (buff[i] == ch)
			return i;
	return -1;
}
void output(char* buff, char ch, int idx) {
	if( idx < 0 )
		printf("%s 문자열에는 %c 가 없습니다.\n", buff, ch);
	else
		printf("%s 문자열에는 %c 가  %d 번째 있습니다.\n", buff, ch, idx);
}



#endif


#if 0
#include <stdio.h>

void input(char* buff);
void my_tolower(char* buff);
void my_toupper(char* buff);
void output(char* buff);

int main() {
	char buff[1024];

	input(buff);
	my_tolower(buff);
	output(buff);
	my_toupper(buff);
	output(buff);
	return 0;
}

void input(char* buff) {
	printf("문자열 입력 : ");
	gets(buff);
}

void my_tolower(char *buff){
	int i;
	for (i = 0; buff[i] != 0; i++)
	{
		if ('A' <= buff[i] && buff[i] <= 'Z')
			buff[i] += 'a' - 'A';
	}
}

void my_toupper(char* buff) {
	int i;
	for (i = 0; buff[i] != 0; i++)
	{
		if ('a' <= buff[i] && buff[i] <= 'z')
			buff[i] -= 'a' - 'A';
	}
}

void output(char* buff) {
	printf("%s\n", buff);
}


#endif


#if 0
#include <stdio.h>

void input(int* dan);
void calc(int(*a)[3], int dan);
void output(int(*a)[3], int dan);

int main() {
	int dan;
	int a[9][3] = { 0, };
	
	input(&dan);
	calc(a, dan);
	output(a, dan);

	return 0;
}

void input(int* dan){
	printf("단수 입력 : ");
	scanf("%d", dan);
}

void calc(int (*a)[3], int dan){
	int i;
	for (i = 0; i < 9; i++)
	{
		a[i][0] = dan;
		a[i][1] = i + 1;
		a[i][2] = dan * (i + 1);
	}
}

void output(int(*a)[3], int dan){
	int i;
	printf("%d단 출력\n", dan);
	printf("---------\n");

	for (i = 0; i < 9; i++)
		printf("%3d * %3d = %3d\n", a[i][0], a[i][1], a[i][2]);
}

#endif



#if 0
#include <stdio.h>

void input(double* temp1);
void calc(double temp1, double* temp2);
void output(double temp1, double temp2);

int main() {
	double temp1, temp2;

	input(&temp1);
	calc(temp1, &temp2);
	output(temp1, temp2);
	return 0;
}

void input(double* temp1)
{
	printf("화씨 온도 입력 : ");
	scanf("%lf", temp1);
}

void calc(double temp1, double* temp2)
{
	*temp2 = ((double)5 / 9) * (temp1 - 32);
}

void output(double temp1, double temp2)
{
	printf("화씨 %.1lf 도는 섭씨 %.1lf 도 입니다.\n", temp1, temp2);
}

#endif


#if 0
#include <stdio.h>

void input(int* start, int* end);
void calc(int start,  int end, int* total);
void output(int start, int end, int total);

int main() {
	int start, end;
	int total = 0;

	input(&start, &end);
	calc(start, end, &total);
	output(start, end, total);

	return 0;
}

void input(int* start, int* end)
{
	printf("두 숫자 입력 : ");
	scanf("%d %d", start, end);
}

void calc(int start, int end, int* total)
{
	int i, j;
	for (i = start; i <= end; i++)
	{
		for (j = 1; j <= i; j++)
			*total += j;
	}
}

void output(int start, int end, int total)
{
	int i, j;
	for (i = start; i <= end; i++)
	{
		printf("(");
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
			if( j < i)
				printf("+");
		}
		printf(")");
		if (i < end)
			printf("+");
	}
	printf("\n\n");
	printf("총 합 : %d\n", total);
}
#endif


#if 0
#include <stdio.h>

void input(int* a);
void calc(int* a, int* total);
void output(int* a, int total);

int main() {
	int a[10] = { 0, };
	int total = 0;

	input(a);
	calc(a, &total);
	output(a, total);

	return 0;
}

void input(int* a)
{
	int i;
	printf("10개 숫자 입력 : ");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
}

void calc(int* a, int* total)
{
	int i;
	for (i = 0; i < 10; i++)
		*total += a[i];
}

void output(int* a, int total)
{
	int i;
	for (i = 0; i < 10; i++)
		printf("%4d", a[i]);
	printf("\n합 : %d\n", total);
}
#endif

#if 0
#include <stdio.h>

void input(int* start, int* end);
int calc(int start, int end);
void output(int start, int end, int total);
int main(){
	int total = 0;
	int start, end;
	
	input(&start, &end);
	total = calc(start, end);
	output(start, end, total);
	
	return 0;
}
void input(int* start, int* end){
	printf("숫자 두개 입력 : ");
	scanf("%d %d", start, end);
}
int calc(int start, int end){
	int i;
	int total=0;
	for (i = start; i <= end; i++)
		total += i;
	return total;
}
void output(int start, int end, int total){
	printf("%d 에서 %d 까지의 합은 %d 입니다.\n", start, end, total);
}
#endif