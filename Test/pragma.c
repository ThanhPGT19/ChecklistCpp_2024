// C program to demonstrate the working of #pragma startup
// and #pragma exit

#include <stdio.h>

void func1();
void func2();

#pragma pack(8)
typedef struct
{
    int a;
    char b;
    double c;
}nameofstruct;
#pragma pack(0)

void func1() { printf("Inside func1()\n"); }

void func2() { printf("Inside func2()\n"); }

int main()
{
    nameofstruct a1;
	printf("%d\n",sizeof(a1));

	return 0;
}
