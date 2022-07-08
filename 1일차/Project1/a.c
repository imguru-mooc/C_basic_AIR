#if 1
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