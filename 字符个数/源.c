#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch;
	int digit = 0;
	while ((ch = getchar()) != '\n') {
		if (ch >= '0' && ch <= '9')
			digit++;
	}
	printf("%d\n", digit);
	return 0;
}