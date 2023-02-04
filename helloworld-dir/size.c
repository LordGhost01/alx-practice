#include <stdio.h>

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("size of int =%lu\n", sizeof(a));
	printf("size of long int =%lu\n", sizeof(b));
	printf("size of long long int =%lu\n",sizeof(c));
	printf("size of char =%lu\n", sizeof(d));
	printf("size of float =%lu\n", sizeof(e));
	
	return 0;
}
