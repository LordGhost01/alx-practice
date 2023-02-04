#include <stdio.h>

int main(void)
{
	int age;
	char f;
	char m;
	char l;

	printf("input your first, middle and last initials: ");
	scanf("%c %c %c", &f, &m, &l);
	printf("input your age: ");
	scanf("%d", &age);
	printf("My initials are; %c%c%c\n", f, m, l);
	printf("My age is; %d\n", age);

	return 0;
}
