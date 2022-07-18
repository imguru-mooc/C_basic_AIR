#if 1
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[32];
	int kor, eng, math;
	int total;
	double aver;
	char grade;
} ST;
void init(ST** s, int* n);
void input(ST* s, int n);
void calc(ST* s, int n);
void output(ST* s, int n);
void filesave(ST* s, int n);
void fileload(char* fname);
int main() {
	int n;
	ST* s;

	init(&s, &n);
	input(s, n);
	calc(s, n);
	output(s, n);
	filesave(s, n);
	free(s);
	fileload("score.txt");
	return 0;
}
void filesave(ST* s, int n) {
	FILE* fp;
	fp = fopen("score.txt", "w");
	fwrite(s, sizeof(ST), n, fp);
	fclose(fp);
}

void fileload(char *fname) {
	FILE* fp;
	ST s;
	fp = fopen(fname, "r");
	while (fread(&s, sizeof(ST), 1, fp)){
		printf("%10s %6d %6d %6d %6d  %6.2f %6c\n",
			s.name, s.kor, s.eng, s.math, s.total, s.aver
			, s.grade);
	}
	fclose(fp);
}


void init(ST** s, int* n)
{
	printf("학생수 입력 : ");
	scanf("%d", n);
	getchar();
	*s = (ST*)malloc(sizeof(ST) * *n);
}

void input(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		printf("이름 입력 : ");
		gets(s[i].name);
		printf("국어 영어 수학 점수 입력 : ");
		scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);
		getchar();
	}
}
void calc(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		s[i].total = s[i].kor + s[i].eng + s[i].math;
		s[i].aver = (double)s[i].total / 3;
		if (s[i].aver >= 90.)
			s[i].grade = 'A';
		else if (s[i].aver >= 80.)
			s[i].grade = 'B';
		else if (s[i].aver >= 70.)
			s[i].grade = 'C';
		else if (s[i].aver >= 60.)
			s[i].grade = 'D';
		else
			s[i].grade = 'F';
	}
}
void output(ST* s, int n) {
	int i;

	printf("%10s %6s %6s %6s %6s %6s %6s\n",
		"이름", "국어", "영어", "수학", "총점", "평균", "등급");
	printf("======================================================\n");

	for (i = 0; i < n; i++)
	{
		printf("%10s %6d %6d %6d %6d  %6.2f %6c\n",
			s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].aver
			, s[i].grade);
	}
}
#endif


#if 0
#include <stdio.h>
typedef struct
{
	char name[32];
	int score;
} ST;
int main()
{
	ST s = { "kim", 1234 };
	ST temp;
	FILE* dst;
	FILE* src;

	dst = fopen("record.txt", "w");
	fwrite( &s, sizeof(ST),  1, dst);
	fclose(dst);

	src = fopen("record.txt", "r");
	fread( &temp, sizeof(ST), 1, src);
	printf("%s %d\n", temp.name, temp.score);
	fclose(src);

	return 0;
}
#endif



#if 0
#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* dst;

	dst = fopen("format.txt", "w");

	fprintf(dst, "%d %d\n", 10, 20);
	fprintf(dst, "%d %d\n", 30, 40);

	fclose(dst);
	return 0;
}
#endif



#if 0
#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* src;
	FILE* dst;
	char buff[128];
	int n;

	src = fopen("xxx.txt", "r");
	dst = fopen("yyy.txt", "w");

	while (n = fread(buff, 1, sizeof(buff), src))
	{
		fwrite(buff, 1, n, dst);
	}

	fclose(src);
	fclose(dst);
	return 0;
}
#endif


#if 0
#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* fp;
	char buff[10];
	int n;
	char name[32];
	int kor, eng, math;
	double aver;

	fp = fopen("info.txt", "r");
	fscanf(fp, "%s %d %d %d %lf", name, &kor, &eng, &math, &aver);
	printf("%s %d %d %d %lf\n", name, kor, eng, math, aver);
	
	fclose(fp);
	return 0;
}
#endif


#if 0
#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* fp;
	char buff[10];
	int n;

	fp = fopen("7일차.c", "r");

	while (n = fread(buff, 1, sizeof(buff), fp))
	{
		fwrite(buff, 1, n, stdout);

		fflush(stdout);
		Sleep(100);
	}

	fclose(fp);
	return 0;
}
#endif


#if 0
#include <stdio.h>
#include <windows.h>
int main()
{
	FILE* fp;
	char buff[1024];

	fp = fopen("7일차.c", "r");

	while (fgets(buff, sizeof(buff), fp))
	{
		fputs(buff, stdout);

		fflush(stdout);
		Sleep(100);
	}

	fclose(fp);
	return 0;
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp;
	int ch;

	fp = fopen("xxx.txt", "r");

	while ((ch = fgetc(fp)) != EOF)
		fputc(ch, stdout);

	fclose(fp);
	return 0;
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[32];
	int kor, eng, math;
	int total;
	double aver;
	char grade;
} ST;
void init(ST** s, int* n);
void input(ST* s, int n);
void calc(ST* s, int n);
void output(ST* s, int n);
int main() {
	int n;
	ST* s;

	init(&s, &n);
	input(s, n);
	calc(s, n);
	output(s, n);
	free(s);
	return 0;
}

void init(ST** s, int* n)
{
	printf("학생수 입력 : ");
	scanf("%d", n);
	getchar();
	*s = (ST*)malloc(sizeof(ST) * *n);
}

void input(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		printf("이름 입력 : ");
		gets(s[i].name);
		printf("국어 영어 수학 점수 입력 : ");
		scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);
		getchar();
	}
}
void calc(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		s[i].total = s[i].kor + s[i].eng + s[i].math;
		s[i].aver = (double)s[i].total / 3;
		if (s[i].aver >= 90.)
			s[i].grade = 'A';
		else if(s[i].aver >= 80.)
			s[i].grade = 'B';
		else if (s[i].aver >= 70.)
			s[i].grade = 'C';
		else if (s[i].aver >= 60.)
			s[i].grade = 'D';
		else
			s[i].grade = 'F';
	}
}
void output(ST* s, int n) {
	int i;

	printf("%10s %6s %6s %6s %6s %6s %6s\n", 
		"이름", "국어", "영어", "수학", "총점", "평균", "등급");
	printf("======================================================\n");

	for (i = 0; i < n; i++)
	{
		printf("%10s %6d %6d %6d %6d  %6.2f %6c\n",
			s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].aver
		    , s[i].grade);
	}
}
#endif



#if 0
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[32];
	int kor, eng, math;
	int total;
	double aver;
} ST;
void init(ST** s, int* n);
void input(ST* s, int n);
void calc(ST* s, int n);
void output(ST* s, int n);
int main() {
	int n;
	ST *s;

	init(&s, &n);
	input(s, n);
	calc(s, n);
	output(s, n);
	free(s);
	return 0;
}

void init(ST** s, int* n)
{
	printf("학생수 입력 : ");
	scanf("%d", n);
	getchar();
	*s = (ST*)malloc(sizeof(ST) * *n);
}

void input(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		printf("이름 입력 : ");
		gets(s[i].name);
		printf("국어 영어 수학 점수 입력 : ");
		scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);
		getchar();
	}
}
void calc(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		s[i].total = s[i].kor + s[i].eng + s[i].math;
		s[i].aver = (double)s[i].total / 3;
	}
}
void output(ST* s, int n) {
	int i;

	printf("%10s %6s %6s %6s %6s %6s\n", "이름", "국어", "영어", "수학", "총점", "평균");
	printf("=========================================\n");

	for (i = 0; i < n; i++)
	{
		printf("%10s %6d %6d %6d %6d  %6.2f\n",
			s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].aver);
	}
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[32];
	int kor, eng, math;
	int total;
	double aver;
} ST;
void input(ST* s, int n);
void calc(ST* s, int n);
void output(ST* s, int n);
int main() {
	int n = 3;
	ST s[3];
	input(s, n);
	calc(s, n);
	output(s, n);
	return 0;
}
void input(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		printf("이름 입력 : ");
		gets(s[i].name);
		printf("국어 영어 수학 점수 입력 : ");
		scanf("%d %d %d", &s[i].kor, &s[i].eng, &s[i].math);


		getchar();
	}
}
void calc(ST* s, int n) {
	int i;

	for (i = 0; i < n; i++)
	{
		s[i].total = s[i].kor + s[i].eng + s[i].math;
		s[i].aver = (double)s[i].total / 3;
	}
}
void output(ST* s, int n) {
	int i;

	printf("%10s %6s %6s %6s %6s %6s\n", "이름", "국어", "영어", "수학", "총점", "평균");
	printf("=========================================\n");

	for (i = 0; i < n; i++)
	{
		printf("%10s %6d %6d %6d %6d  %6.2f\n", 
			s[i].name, s[i].kor, s[i].eng, s[i].math, s[i].total, s[i].aver);
	}
}
#endif



#if 0
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int kor, eng, math;
	int total;
	double aver;
} ST;
void input(ST* s);
void calc(ST* s);
void output(ST* s);
int main() {
	ST s;
	input(&s);
	calc(&s);
	output(&s);
	return 0;
}
void input(ST* s) {
	printf("국어 영어 수학 점수 입력 : ");
	scanf("%d %d %d", &s->kor, &s->eng, &s->math);
}
void calc(ST* s) {
	s->total = s->kor + s->eng +s->math;
	s->aver = (double)s->total / 3;
}
void output(ST* s) {
	printf("%6s %6s %6s %6s %6s\n", "국어", "영어", "수학", "총점", "평균");
	printf("%6d %6d %6d %6d  %6.2f\n", s->kor, s->eng, s->math, s->total, s->aver);
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int kor, eng;
	int total;
	double aver;
} ST;
void input(ST *s);
void calc(ST *s);
void output(ST *s);
int main() {
	ST s;
	input(&s);
	calc(&s);
	output(&s);
	return 0;
}
void input(ST *s){
	printf("국어 영어 점수 입력 : ");
	scanf("%d %d", &s->kor, &s->eng);
}
void calc(ST *s){
	s->total = s->kor + s->eng;
	s->aver = (double)s->total / 2;
}
void output(ST *s){
	printf("%6s %6s %6s %6s\n", "국어", "영어", "총점", "평균");
	printf("%6d %6d %6d %6.2f\n", s->kor, s->eng, s->total, s->aver);
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

void input(int* kor, int* eng, int *math);
void calc(int kor, int eng, int math, int* total, double* aver);
void output(int kor, int eng, int math, int total, double aver);
int main() {
	int kor, eng, math;
	int total;
	double aver;

	input(&kor, &eng, &math);
	calc(kor, eng, math, &total, &aver);
	output(kor, eng, math, total, aver);
	return 0;
}
void input(int* kor, int* eng, int *math)
{
	printf("국어 영어 수학 점수 입력 : ");
	scanf("%d %d %d", kor, eng, math);
}

void calc(int kor, int eng, int math, int* total, double* aver)
{
	*total = kor + eng + math;
	*aver = (double)*total / 3;
}

void output(int kor, int eng, int math, int total, double aver)
{
	printf("%6s %6s %6s %6s %6s\n", "국어", "영어", "수학", "총점", "평균");
	printf("%6d %6d %6d %6d %6.2f\n", kor, eng, math, total, aver);
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

void input(int* kor, int* eng);
void calc(int kor, int eng, int* total, double* aver);
void output(int kor, int eng, int total, double aver);
int main() {
	int kor, eng;
	int total;
	double aver;

	input(&kor, &eng);
	calc(kor, eng, &total, &aver);
	output(kor, eng, total, aver);
	return 0;
}
void input(int* kor, int* eng)
{
	printf("국어 영어 점수 입력 : ");
	scanf("%d %d", kor, eng);
}

void calc(int kor, int eng, int* total, double* aver)
{
	*total = kor + eng;
	*aver = (double)*total / 2;
}

void output(int kor, int eng, int total, double aver)
{
	printf("%6s %6s %6s %6s\n", "국어", "영어", "총점", "평균");
	printf("%6d %6d %6d %6.2f\n", kor, eng, total, aver);
}
#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

int main() {
	int kor, eng;
	int total;
	double aver;

	printf("국어 영어 점수 입력 : ");
	scanf("%d %d", &kor, &eng);

	total = kor + eng;
	aver = (double)total / 2;

	printf("%6s %6s %6s %6s\n", "국어", "영어", "총점", "평균");
	printf("%6d %6d %6d %6.2f\n", kor, eng, total, aver);
	return 0;
}

#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	int student_id;
	char student_name[10];
	int age;
}  ST;

void foo(ST s)
{
	printf("%d, %s, %d\n", s.student_id, s.student_name, s.age);
}

int main() {
	ST stu1 = { 1, "김철수", 15 };

	foo(stu1);
	return 0;
}

#endif



#if 0
#include <stdio.h>
#include <stdlib.h>

typedef struct student {
	int student_id;
	char student_name[10];
	int age;
}  ST;

void foo()
{
	ST stu3 = { 1, "김철수", 15 };
}

int main() {
	ST stu1 = { 1, "김철수", 15 };
	ST stu2 = { 2, "김영수", 14 };

	printf("%d, %s, %d\n", stu1.student_id, stu1.student_name, stu1.age);
	printf("%d, %s, %d\n", stu2.student_id, stu2.student_name, stu2.age);
	return 0;
}

#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

int main() {

	typedef struct student {
		int student_id;
		char student_name[10];
		int age;
	}  ST;

	ST stu1 = { 1, "김철수", 15 };
	ST stu2 = { 2, "김영수", 14 };

	printf("%d, %s, %d\n", stu1.student_id, stu1.student_name, stu1.age);
	printf("%d, %s, %d\n", stu2.student_id, stu2.student_name, stu2.age);
	return 0;
}

#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

int main() {

	struct student {
		int student_id;
		char student_name[10];
		int age;
	};
	
	struct student stu1 = { 1, "김철수", 15 };
	struct student stu2 = { 2, "김영수", 14 };

	printf("%d, %s, %d\n", stu1.student_id, stu1.student_name, stu1.age);
	printf("%d, %s, %d\n", stu2.student_id, stu2.student_name, stu2.age);
	return 0;
}

#endif


#if 0
#include <stdio.h>
#include <stdlib.h>

int main() {

	struct {
		int student_id;
		char student_name[10];
		int age;
	} stu1 = {1, "김철수", 15};

	struct {
		int student_id;
		char student_name[10];
		int age;
	} stu2 = { 2, "김영수", 14 };

	printf("%d, %s, %d\n", stu1.student_id, stu1.student_name, stu1.age);
	printf("%d, %s, %d\n", stu2.student_id, stu2.student_name, stu2.age);
	return 0;
}

#endif


#if 0
#include <stdio.h>
#include <stdlib.h>
void init(int** score, int* n);
void input(int* score, int n);
void calc(int* score, int n, int* total, double* aver);
void output(int* score, int n, int total, double aver);
int main() {
	int* score;
	int total = 0, n;
	double aver;

	init(&score, &n);
	input(score, n);
	calc(score, n, &total, &aver);
	output(score, n, total, aver);

	free(score);

	return 0;
}

void init(int** score, int* n)
{
	printf("학생수 입력 : ");
	scanf("%d", n);
	*score = (int*)malloc(sizeof(int) * *n);
}

void input(int* score, int n)
{
	int i;
	printf("점수 입력 : ");
	for (i = 0; i < n; i++)
		scanf("%d", &score[i]);
}
void calc(int* score, int n, int* total, double* aver)
{
	int i;
	for (i = 0; i < n; i++)
		*total += score[i];
	*aver = (double)*total / n;
}
void output(int* score, int n, int total, double aver)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d ", score[i]);
	printf("%4d %.2lf\n", total, aver);
}

#endif


#if 0
#include <stdio.h>
#include <stdlib.h>
void init(int* score, int* n);
void input(int* score, int n);
void calc(int* score, int n, int* total, double* aver);
void output(int* score, int n, int total, double aver);
int main() {
	int* score;
	int total = 0, n;
	double aver;

	init(score, &n);
	input(score, n);
	calc(score, n, &total, &aver);
	output(score, n, total, aver);

	free(score);

	return 0;
}

void init(int* score, int* n)
{
	printf("학생수 입력 : ");
	scanf("%d", n);
	score = (int*)malloc(sizeof(int) * *n);
}
	
void input(int *score, int n)
{
	int i;
	printf("점수 입력 : ");
	for (i = 0; i < n; i++)
		scanf("%d", &score[i]);
}
void calc(int* score, int n, int* total, double* aver)
{
	int i;
	for (i = 0; i < n; i++)
		*total += score[i];
	*aver = (double)*total / n;
}
void output(int* score, int n, int total, double aver)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%4d ", score[i]);
	printf("%4d %.2lf\n", total, aver);
}

#endif

#if 0
#include <stdio.h>
#include <stdlib.h>
int main() {
	int* score;
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